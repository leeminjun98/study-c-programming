#include <stdio.h>

// Chapter 11-1-1
int main(void) {

	int arr[5];
	int i;
	for (i = 0; i < 5; i++) {
		printf("입력 :");
		scanf_s("%d", &arr[i]);

	}
	int a = arr[0];
	int b = arr[1];
	int c = arr[2];
	int d = arr[3];
	int e = arr[4];

	if (a >= b && a >= c && a >= d && a >= e) {
		printf("최댓값은 : %d\n", a);

	}
	else if (b >= c && b >= d && b >= e) {

		printf("최댓값은 : %d\n", b);
	}

	else if (c >= d && c >= e) {
		printf("최댓값은 : %d\n", c);

	}

	else if (d >= e) {
		printf("최댓값은 : %d\n", d);
	}

	else {
		printf("최댓값은 : %d\n", e);
	}

	if (a <= b && a <= c && a <= d && a <= e) {
		printf("최솟값은 : %d\n", a);

	}
	else if (b <= c && b <= d && b <= e) {

		printf("최솟값은 : %d\n", b);
	}

	else if (c <= d && c <= e) {
		printf("최솟값은 : %d\n", c);

	}

	else if (d <= e) {
		printf("최솟값은 : %d\n", d);
	}

	else {
		printf("최솟값은 : %d\n", e);
	}

	int z = a + b + c + d + e;

	printf("입력된 정수들의 합 : %d\n", z);

}


// Chpater 11-1-1 답안

int main(void) {

	int arr[5];
	int max, min, sum, i;
	for (i = 0; i < 5; i++) {
		printf("입력 :");
		scanf_s("%d", &arr[i]);

	}

	max = min = sum = arr[0];

	for (i = 1; i < 5; i++)
	{
		sum += arr[i];
		if (max < arr[i])
			max = arr[i];
		if (min > arr[i])
			min = arr[i];
	}

	printf("최댓값: %d\n", max);
	printf("최솟값: %d\n", min);
	printf("총 합: %d\n",sum);

}












