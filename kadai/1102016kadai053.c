#include<stdio.h>
main() {

	int i, num;

	printf("®”H");
	scanf("%d", &num);

	for (i = 0; i <= 10; i++) {

		printf("%d ", num + i);

	}

	putchar('\n');

}