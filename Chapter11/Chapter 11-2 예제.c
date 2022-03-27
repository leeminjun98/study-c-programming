#include <stdio.h>


int main(void) {
	char str[] = "Good Morning!";
	printf("배열 str의 크기: %d\n", sizeof(str));
	printf("널 문자 문자형 출력: %c\n", str[13]);
	printf("널 문자 정수형 출력: %d\n", str[13]);

	str[12] = '?';
	printf("문자열 출력 : %s\n", str);
	return 0;


}

int main(void) {

	char str[50];
	int idx = 0;

	printf("문자열 입력: ");
	scanf_s("%s", &str,sizeof(str));
	printf("입력 받은 문자열: %s\n", str);

	printf("문자단위출력 :");
	while (str[idx] != '\0') {

		printf("%c", str[idx]);
		idx++;
	}
	printf("\n");
	return 0;

}

















