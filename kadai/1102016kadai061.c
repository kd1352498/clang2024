#include<stdio.h>
main() {

	int num = 0;

	do {

		printf("%3d", ++num);

		if (num % 10 == 0) {

			putchar('\n');

		}

	} while (num < 20);

}