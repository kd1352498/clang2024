#include<stdio.h>
main() {

	int num = 0, sum = 0;

	do {

		num++;
		sum += num;

		printf("%d+", num);

	} while (sum <= 300);

	printf("\b=%d\n",sum);
	
}