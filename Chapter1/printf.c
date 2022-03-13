#include <stdio.h>

int main(void)
{
	printf("이민준\n");
	printf("동작구 본동 48-9번지\n");
	printf("01024164634\n");

	return 0;


}

int main(void) {
	printf("%d\n", 10);
	printf("내키는 %d cm이다.\n", 180);
	return 0;


}



/*
int는 출력값
main은 함수 이름
void는 입력값

include stdio.h는 헤더파일로써 안에 여러 문법들을 사용해줄수 있게 하는 기반	.
\n은 줄바꿈이고 지금 사용하는건 주석이고 //를 쓸수도 있음

마지막에 ;를 붙이는 이유는 그냥 명령의 마침표?같은 느낌으로 이해하기
return 0;는 그 함수를 나가게 해줌 (값을 0으로 반환하는것) 함수의 끝

*/

/*
printf의 부가설명
정수형인자를 출력할때에 %d를 사용한다
예를들어 printf("%d\n",10);
이런식으로 하면 저 %d에 10이 들어가게 된다
물론 printf("내 키는 %d이다.\n",180);  이라고 하면 출력은 '내키는 180이다' 라고 출력이됨
*/