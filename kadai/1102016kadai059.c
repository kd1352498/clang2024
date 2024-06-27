#include<stdio.h>
main() {

	int i, j;

	
	printf("   ");
	
	for (i = 0; i < 9; i++) {
	
		printf("%3d", i + 1);
	
	}
	
	putchar('\n');
	
	for (i = 0; i < 10 * 3; i++) {

		putchar('=');

	}
	
	putchar('\n');
	
	for (i = 0; i < 9; i++) {

		printf("%d |", i + 1);

		for (j = 0; j < 9; j++) {

			printf("%3d", (i + 1) * (j + 1));

		}

		putchar('\n');

	}

}