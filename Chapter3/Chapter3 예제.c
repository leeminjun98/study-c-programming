#include <stdio.h>

//3-1
int main(void) {

	int a=0;
	int b=0;

	printf("두개의정수를 입력하시오:\n");
	scanf_s("%d %d", &a, &b);


	int c = a - b;
	int d = a * b;
	printf("%d - %d = %d\n", a, b, c);
	printf("%d * %d = %d\n", a, b, d);


	return 0;
}

//3-2
int main(void) {

	int result;
	int num1, num2, num3;

	printf("3개의정수를 입력하시오:\n");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	result = num1 * num2 + num3;
	printf("%dx%d+%d=%d", num1, num2, num3, result);


	return 0;
}



//3-3

int main(void) {

	int num;
	int result;

	scanf_s("%d", &num);

	result = num * num;
	printf("%d", result);
	return 0;

}

//3-4
int main(void) {
	int a, b;
	int c, d;

	scanf_s("%d %d", &a, &b);

	c = a / b;
	d = a % b;

	printf("두수나눗셈의몫: %d\n두수나눗셈의나머지:%d", c, d);




	return 0;
}




//3-5
int main(void) {
	int num1, num2, num3;
	int a, b, c, result;


	scanf_s("%d %d %d", &num1, &num2, &num3);

	a = num1 - num2;
	b = num2 + num3;
	c = num3 % num1;
	result = a * b * c;

	printf("연산결과 : %d\n", result);


	return 0;

}

