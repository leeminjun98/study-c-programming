#include <stdio.h>
//7-1-1
int main(void) {

	int a=0;
	int b;
	scanf_s("%d", &b);
	while (a < b)
	{
		printf("hello world\n", a++);

	}

	return 0;

}

// 7 - 1 - 2
int main(void) {

	int a=1;
	int b;
	scanf_s("%d", &b);

	while (a<=b) {

		printf("%d\n", 3 * a++);
	}

	return 0;

}




// 7-1-3
int main(void) {

	int a = 0;
	int b = 1;

	printf("정수 입력(0 to quit) : ");
	while (b!=0) {
		scanf_s("%d", &b);

		a = a + b;

	}

	printf("입력된 정수의 합 : %d\n", a);
	return 0;
}



//  7-1-4
int main(void) {

	int a;
	scanf_s("%d", &a);
	int b = 9;

	while (b > 0) {

		printf("%d x %d = %d\n", a, b--, a * b);



	}
	return 0;
}



// 7-1-5(해설봣음)
int main(void) {

	int total = 0,i = 0;
	int num, input;

	printf("입력할 정수의 수는?");
	scanf_s("%d", &num);

	while (i++ < num) {

		printf("정수입력 : ");
		scanf_s("%d", &input);
		total+=input;
	}
	printf("입력의 평균 :%f\n", (float)total / num);
	return 0;

}

