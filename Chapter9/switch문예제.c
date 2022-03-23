#include <stdio.h>


 


int main(void) {

	int num;
	printf("1이상 5이하의 정수 입력 :");
	scanf_s("%d", &num);

	switch (num) {


	case 1:
		printf("1은 one\n");
		break;
	case 2:
		printf("2은 two\n");
		break;
	case 3:
		printf("3은 three\n");
		break;
	case 4:
		printf("4는 four\n");
		break;
	case 5:
		printf("5는 five\n");
		break;

	default:
		printf("I don't know!\n");

	}
	return 0;

}


int main(void) {

	char sel;
	printf("M 오전, A 오후, E 저녁\n");
	printf("입력");
	scanf_s("%c", &sel);

	switch (sel) {

	case 'M':
	case 'm':
		printf("Morning\n");
		break;
	case 'A':
	case 'a':
		printf("Afternoon\n");
		break;
	case 'E':
	case 'e':
		printf("Evening");
		break;
	}
	return 0;

}















