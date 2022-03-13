int main(void) {


	int num = 1;
	for (; num <= 100; num++)
		if (num % 7 == 0 || num % 9 == 0)
			printf("7의배수이거나 9의 배수인 정수 : %d\n", num);
	return 0;
}