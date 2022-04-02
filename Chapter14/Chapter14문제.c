#include <stdio.h>

//Chapter 14-1-1, Call-by-value & Call-by-reference
void SquareByValue(int x) {
	
	x = x * x;
	printf("%d\n", x);
}

void SquareByReference(int* p) {
	
	p[0] = p[0] * p[0];
	printf("%d", p[0]);
}

int main(void) {
	int num;
	scanf_s("%d", &num);
	SquareByValue(3);
	SquareByReference(&num);


}


//Chapter 14-1-2
void Swap3(int* a, int* b, int* c) {
	int temp = *c;

	*c = *b;
	*b = *a;
	*a = temp;


}

int main(void) {

	int num1, num2, num3;
	scanf_s("%d %d %d", &num1, &num2, &num3);
	Swap3(&num1, &num2, &num3);
	printf("%d %d %d", num1, num2, num3);

}

//Chapter 15
int main(void) {



}


















