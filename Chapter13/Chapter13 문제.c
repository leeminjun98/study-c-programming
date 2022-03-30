#include <stdio.h>



 //Chapter13 - 1 - 1
int main(void) {
	int arr[5] = { 1,2,3,4,5 };
	int* ptr = arr;

	for (int i = 0; i < 5; i++) { //방법1

		arr[i]++;
		arr[i]++;

	}

	for (int i = 0; i < 5; i++) { //방법2

		* (ptr+i) = * (ptr+i) + 2;
		
	}
	printf("%d %d %d %d %d \n", arr[0], arr[1], arr[2], arr[3], arr[4]);
}

 
//Chapter13 - 1 - 3
int main(void) {

	int arr[5] = { 1,2,3,4,5 };
	int* ptr = (arr+4);
	int sum = 0;
	for (int i = 0; i <5; i++) {

		sum += *(ptr - i);

	}
	printf("%d", sum);
	return 0;
}



//Chapter13-1-4
int main(void) {
	int arr[6] = { 1,2,3,4,5,6 };
	int* list = (arr+5);
	int reverse[6];
	int* rlist = reverse;

	for (int i = 0; i < 6; i++) {
		 *(rlist + i) = *(list - i);

	}

	printf("%d %d %d %d %d %d", reverse[0], reverse[1], reverse[2], reverse[3], reverse[4], reverse[5]);

	return 0;

}


















