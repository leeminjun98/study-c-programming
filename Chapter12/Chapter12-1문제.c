#include <stdio.h>


//12-1-1
int main(void) {
	int num = 10;
	int* ptr1 = &num;
	int* ptr2 = ptr1;

	(*ptr1)++;
	(*ptr2)++;
	printf("%d\n", num);
	return 0;

}

//12-1-2
int main(void) {
	int num1 = 10, num2 = 20;
	int* ptr1 = &num1;
	int* ptr2 = &num2;

	*ptr1 = num1 + 10;
	*ptr2 = num2 - 10;

	int temp;
	temp = num1;
	*ptr1 = num2;
	*ptr2 = temp;
	
	printf("num1: %d, num2: %d", *ptr1, *ptr2);

}