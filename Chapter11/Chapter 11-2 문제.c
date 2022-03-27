#include <stdio.h>

//Chapter 11 - 2 - 1 quiz
int main(void) {

	char str[50];
	printf("영단어를 입력하시오 : ");
	scanf_s("%s", &str, sizeof(str));   // 변수의 크기 같이 적기
	int i = 0;

	while (str[i] != '\0') {

		i++;
	}

	printf("입력받은 영단어의 길이는 : %d", i);
	return 0;


}



//Chapter 11 - 2 - 2 quiz
int main(void) {

	char str[50];
	printf("영단어를 입력하시오 : ");
	scanf_s("%s", &str, sizeof(str));
	int i;
	int len = 0;
	char k;
		while (str[len] != '\0')
		{
			len++;
			}
	
		for (i = 0; i < len / 2; i++) {

			k = str[i];
			str[i] = str[len - i - 1];
			str[len - i - 1] = k;
	}
	printf("뒤집힌 영단어:%s", str);
	return 0;

}



//Chapter 11 - 2 - 3 quiz
int main(void) {

	char str[50];
	int len = 0, i;
	char max = 0;

	printf("영단어를 입력하시오 :");
	scanf_s("%s", &str, sizeof(str));

	while (str[len] != '\0') {
		len++;
	}

	for (i = 0; i < len; i++)
	{
		if (max < str[i])
			max = str[i];
	}

	printf("가장 큰 아스키 코드 값의 문자 : %c", max);
	return 0;

}



