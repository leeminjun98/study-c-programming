#include <stdio.h>

//Chapter 14-1예제
void ShowArayElem(int* param, int len) {

	int i;
	for (i = 0; i < len; i++) {
		printf("%d", param[i]);
	}
	printf("\n");
}

int main(void) {
	int arr1[3] = { 1,2,3 };
	int arr2[5] = { 4,5,6,7,8 };
	ShowArayElem(arr1, sizeof(arr1) / sizeof(int));
	ShowArayElem(arr2, sizeof(arr2) / sizeof(int));

}



//Chapter 14-1 예제
void ShowArayElem(int* param, int len) {

	int i;
	for (i = 0; i < len; i++) {
		printf("%d", param[i]);
	}
	printf("\n");
}

void AddArayElem(int* param, int len, int add) {
	int i;
	for (i = 0; i < len; i++)
		param[i] += add;

}

int main(void) {
	int arr[3] = { 1,2,3 };
	AddArayElem(arr, sizeof(arr) / sizeof(int), 1);
	ShowArayElem(arr, sizeof(arr) / sizeof(int));
	
	AddArayElem(arr, sizeof(arr) / sizeof(int), 2);
	ShowArayElem(arr, sizeof(arr) / sizeof(int));
	
	AddArayElem(arr, sizeof(arr) / sizeof(int), 3);
	ShowArayElem(arr, sizeof(arr) / sizeof(int));
	return 0;
}

//Chapter 14-2 예제

void Swap(int* ptr1, int* ptr2) {
	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}

int main(void) {
	int num1 = 10;
	int num2 = 20;
	printf("num1 num2: %d %d \n", num1, num2);
	Swap(&num1, &num2);
	printf("num1 num2: %d %d \n", num1, num2);
	return 0;
}