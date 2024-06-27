/*バブルソート*/

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

	for (i = CNT - 1; i > 0; i--) {
		for (j = 0; j < i; j++) {
			if (d[j] > d[j + 1]) {

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