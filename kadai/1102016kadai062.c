#include<stdio.h>
main() {

	int num = 20;

	do {

		printf("%3d", num--);

		if (num % 10 == 0) {

			putchar('\n');

		}

	} while (num > 0);

}