#include<stdio.h>
main() {

	int num = 0;

	while (num < 20) {

		printf("%3d", ++num);

		if (num % 10 == 0) {

			putchar('\n');

		}
	}

}