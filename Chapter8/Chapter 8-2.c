#include <stdio.h>


int main(void) {
	int sum = 0, num = 0;
	while (1) {
		sum += num;
		if (sum > 5000)
			break;
		num++;

	}

	printf("sum : %d\n", sum);
	printf("num : %d\n", num);
	return 0;


}




int main(void) {

	int num;
	printf("start!\n");

	for (num = 1; num < 20; num++) {

		if (num % 2 == 0 || num % 3 == 0)
			continue;
		printf("%d\n", num);
	}

	printf("end!\n");

	return 0;

}





int main(void) {

	int num=1;
	int b=1;
	for (; num < 9; num++) {

		if (num % 2 == 0) {
			int a = 1;
			for(;a<=num;a++)
				printf("%d x %d = %d\n", num,a,num*a);
		}
		
	}

	return 0;

}






int main(void) {

	int a = 0;
	for (;a<=9 ;a++) {
		int z = 0;
		for (; z <= 9; z++) {
			if (10 * a + z + 10 * z + a == 99)
				printf("a = %d, z = %d\n",a,z);		
		}
	}
	
	return 0;
}




int main(void) {

	int a = 0;
	for (; a <= 9; a++) {
		int z = 0;
		for (; z <= 9; z++) {
			if (10 * a + z + 10 * z + a != 99)
				continue;
				printf("a = %d, z = %d\n", a, z);
		}
	}

	return 0;
}






















