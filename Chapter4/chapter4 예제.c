#include <stdio.h>


int main(void) {

	int num1;


	printf("아무수나입력하시오 : \n");
	scanf_s("%d", &num1);

	int num2 = ~num1;
	printf("%d", ++num2);
}





int main(void) {

	printf("3x8/4 \n");
	
	int num1 = 3;
	int num2 = num1 << 3;
	int num3 = num2 >> 2;

	printf("%d", num3);


}
