#include <stdio.h>
#include <stdlib.h>


#define MAX_DEGREE 9
typedef struct {//계수배열
	int degree; //최고차항 지수
	int coef[MAX_DEGREE+1]; 
}coefarraypoly;

#define MAX_TERMS 100
typedef struct {//항배열
	int coef;
	int exp;
}termpoly;
termpoly p[MAX_TERMS];
int avail = 0;
int x = 0;
coefarraypoly readpoly() {//다항식 두개 계수배열로 입력받고, 오름차순으로 저장
	
	int a, b, c, d, e, f;
	int i;
	coefarraypoly p;
	for (i = 0; i < 10; i++) {
		p.coef[i] = 0;
	}
	printf("조건 : 계수 값은 양수 또는 음수이고 자료형은 정수, 지수 값은 0 이상 9 이하\n");
	printf("ax^b + cx^d + ex^f 로 다항식 입력(a,b,c,d,e,f순서로 입력) : ");
	scanf_s("%d %d %d %d %d %d",&a, &b, &c, &d, &e, &f);
	printf("다항식 (입력확인용) : %dx^%d + %dx^%d + %dx^%d\n", a, b, c, d, e, f);
	printf("--------------------------------------------------------------------\n");
	p.degree = b;
	p.coef[b] = a;
	p.coef[d] = c;
	p.coef[f] = e;
	return p;

}

int compare( int a, int b ) {

	if (a < b) return 1;
	else if (a = b) return 0;
	else return -1;

}

void multipoly(coefarraypoly a, coefarraypoly b) {//두 다항식 곱하여 항배열에 내림차순으로 저장

	
	int i, j;
	int k;
	int q;
	for (k = 0; k < MAX_TERMS; k++) {
		p[k].coef = 0;
		p[k].exp = 0;
	}

	int x = 0;
	for (i = a.degree; i >= 0; i--) {
		for (j = b.degree; j >= 0; j--) {

			if (a.coef[i] * b.coef[j] == 0)  //어느 하나라도 계수가 0이라면 곱햇을때 사라진다.
				continue;

			else if (i + j == 0) {  //마지막항이 상수항일때, 왜냐하면 avail부터의 나머지 배열에소속된 값이 다 0이기 때문에 exp가같다고 인식할 수도 있어서
				p[x].coef = a.coef[i] * b.coef[j];
				p[x].exp = 0;
				continue;
			}

			else {  //일반적인 경우에서 
				for (q = 0; q <= 10;) {

					if (p[q].exp < i + j) {  //지수가 계산된지수보다 작으면 
						if (q == 0 || p[q].coef == 0) {
							p[x].coef = a.coef[i] * b.coef[j];
							p[x].exp = i + j;
							x++;
						}
						else {
							for (int m = 10; m >= 0; m--) {
								p[q + m + 1].coef = p[q + m].coef;
								p[q + m + 1].exp = p[q + m].exp;
								}
							p[q].coef = (a.coef[i] * b.coef[j]);
							p[q].exp = i + j;
							x++;
						}
						break;
					}
					else if (p[q].exp > i + j) { //지수검사과정에서 계산된거보다 크면 
						q++;
					}

					else {      // 지수가 같은 경우가 있으면
						p[q].coef += (a.coef[i] * b.coef[j]);
						if (p[q].coef == 0) {  //지수가 같아서 더했는데 계수가 0이 되면 배열에 있는 계수, 지수값 한칸씩 앞으로 당기기.
							for (int m = 0; m < 10; m++) {
								p[q + m].coef = p[q + m + 1].coef;
								p[q + m].exp = p[q + m + 1].exp;
							}
							x--;    //물론 다음에 할당받을 공간도 한칸씩 당겨준다.						
						}
						break;
					}
				
				}
			}
		}
	}
}



void print_coefarraypoly(coefarraypoly a) {//계수배열 출력함수
	int i;

	if(i=a.degree)	
		printf("  %dx^%d  ", a.coef[i], i);

	for(i = a.degree-1; i > 0; i--) {
		if (a.coef[i] == 0)
			continue;
		else if (a.coef[i] > 0) 
			printf("  + %dx^%d  ", a.coef[i], i);
		else
			printf("  %dx^%d ", a.coef[i], i);
		
	}
	if(a.coef[0] != 0)
		printf(" + %dx%d\n", a.coef[0],0);
	printf("\n");

}

void print_termpoly(int a) {

	printf("%dx^%d ", p[0].coef, p[0].exp);
	for (int i = 1; i < a; i++) {		
		if (p[i].exp == 0)
			break;
		else 
			if(p[i].coef<=0)
				printf(" %dx^%d ", p[i].coef, p[i].exp);
			else
				printf("+%dx^%d ", p[i].coef, p[i].exp);
	}
}



int main (void) {
	coefarraypoly A, B;
	A = readpoly();
	B = readpoly();


	multipoly(A, B);
	

	printf("A(x) : ");
	print_coefarraypoly(A);
	printf("B(x) : ");
	print_coefarraypoly(B);

	printf("D(x) : ");
	print_termpoly(11);

}


