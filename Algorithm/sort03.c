#include<stdio.h>

#define CNT 5

main() {

	int d[CNT] = { 30,7,25,16,10 };
	int i, j, w;


	printf("ソート前:");

	for (i = 0; i < CNT; i++) {

		printf("%3d", d[i]);

	}

	putchar('\n');

	for (i = 1; i < CNT; i++) {
		for (j = i - 1; j >= 0; j--) {
			if (d[j + 1] >= d[j]) {
				
				break;

			}
			else {

				w = d[j];
				d[j] = d[j + 1];
				d[j + 1] = w;

			}
		}
	}

	printf("ソート後:");

	for (i = 0; i < CNT; i++) {

		printf("%3d", d[i]);

	}

	putchar('\n');

}