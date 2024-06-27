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

	for (i = 0; i < CNT - 1; i++) {
		for (j = i + 1; j < CNT; j++) {
			if (d[i] > d[j]) {

				w = d[i];
				d[i] = d[j];
				d[j] = w;
			
			}
		}
	}
	
	printf("ソート後:");

	for (i = 0; i < CNT; i++) {
		
		printf("%3d", d[i]);
	
	}

	putchar('\n');

}