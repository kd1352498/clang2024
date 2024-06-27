//1102016kadai101.c
#include<stdio.h>
main() {

	int i, j, num = 1;
	int a[5][5];

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			a[i][j] = num;
			num++;
		}
	}
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("%2d ", a[i][j]);
		}
		printf("\n");
	}
}