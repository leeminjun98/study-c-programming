#include <stdio.h>


int main(void) {


	int num = 1;
	for (; num <= 100; num++)
		if (num % 7 == 0 || num % 9 == 0)
			printf("7의배수이거나 9의 배수인 정수 : %d\n", num);
	return 0;
}




int main(void) {

	int num1, num2;
	printf("두수를 입력하시오 :");
	scanf_s("%d %d", &num1, &num2);
	if (num1 >= num2)
		printf("두수의 차의 절댓값은 : %d", num1 - num2);
	else
		printf("두수의 차의 절댓값은 : %d", num2 - num1);


}



int main(void) {

	int a, b, c;

	printf("국어, 영어, 수학의점수를 차례대로 입력하시오.\n");
	scanf_s("%d %d %d", &a, &b, &c);

	int total = a + b + c;
	if (total >= 270)
		printf("당신의 학점은 A입니다.");
	else if (total >= 240)
		printf("당신의 학점은 B입니다.");
	else if (total >= 210)
		printf("당신의 학점은 C입니다.");
	else if (total >= 150)
		printf("당신의 학점은 D입니다.");
	else 
		printf("당신의 학점은 F입니다.");

	return 0;

}


int main(void) {


	int num1, num2;
	int result;

	printf("두수를 입력하시오:");
	scanf_s("%d %d", &num1, &num2);

	result = (num1 >= num2) ? num1 - num2: num2 - num1;
	printf("두수의 차의 절댓값 :%d", result);
	return 0;
}













