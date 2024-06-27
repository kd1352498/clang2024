#include<stdio.h>
main() {

	int num = 20;

	while (num > 0) {

		printf("%3d", num--);

		if (num % 10 == 0) {

			putchar('\n');

		}
	}

}