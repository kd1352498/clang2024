#include<stdio.h>

#define DCNT 8

main() {

	int d[DCNT] = { 70,60,80,50,40,20,30,10, };
	int i, j;
	int w;
	int gap;

	gap = DCNT / 2;

	while (gap > 0) {
		
		printf("gap = %d\n", gap);
		
		for (i = gap; i < DCNT; i++) {
			for (j = i - gap; j >= 0; j -= gap) {

				int k;

				for (k = 0; k < DCNT; k++) {

					printf("%3d", d[k]);

				}

				putchar('\n');

				if (d[j + gap] < d[j]) {

					w = d[j];
					d[j] = d[j + gap];
					d[j + gap] = w;

				}
				else{

					break;

				}
			}
		}

		gap /= 2;

		printf("-------------------------\n");

	}

	for (i = 0; i < DCNT; i++) {

		printf("%3d", d[i]);

	}

	putchar('\n');

}
