//1102016kadai083.c
#include<stdio.h>
main() {

	int i;

	for (i = 0; i < 20; i++) {

		if (i % 2 == 1) continue;
		
		printf("%d ", i + 1);

	}

	putchar('\n');

}