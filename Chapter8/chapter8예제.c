#include <stdio.h>



int main(void) {

	int num;
	printf("정수입력 : ");
	scanf_s("%d", &num);

	if (num < 0)
		printf("입력 값은 0보다 작다.\n");

	else
		printf("입력 값은 0보다 작지 않다.\n");

	return 0;
}




int main(void) {
	int num, abs;
	printf("정수 입력:");
	scanf_s("%d", &num);

	abs = num >= 0 ? num : num * (-1);

	printf("정수의절댓값 :%d ", abs);
	return 0;
}




int main(void) {

	int opt;
	double num1, num2;
	double result;

	printf("1.덧셈 2.뺄셈 3.곱셈 4.나눗셈\n");
	printf("선택?");
	scanf_s("%d", &opt);
	printf("두개의 실수 입력 : ");
	scanf_s("%lf %lf", &num1, &num2);

	if (opt == 1)
		result = num1 + num2;

	if (opt == 2)
		result = num1 - num2;

	if (opt == 3)
		result = num1 * num2;

	if (opt == 4)
		result = num1 / num2;

	printf("결과: %f", result);

	return 0;
}


int main(void) {

	int num=1;
	for (; num <= 100; num++)
		if (num % 3 == 0 || num % 4 == 0)
			printf("3이나 4의배수 : %d\n ", num);
	return 0;
}

