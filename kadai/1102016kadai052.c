#include<stdio.h>
main() {

	int num;

	for (num = 1; num <= 60; num++) {

		printf("%3d", num);

		if (num % 20 == 0) {

			printf("\n");

		}
	}

}