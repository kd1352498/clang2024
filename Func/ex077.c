#include<stdio.h>
void cal(int x, int y, int z, int* max, int* min);

main() {

	int a, b, c, max, min;

	printf("®”‚ğ‚R‚Â“ü—ÍF");
	scanf("%d%d%d", &a, &b, &c);

	cal(a, b, c, &max, &min);

	printf("Å‘å’l = %d Å¬’l = %d", max, min);

}
void cal(int x, int y, int z, int* max, int* min) {

	*max = x;

	if (*max < y) {

		*max = y;

	}
	if (*max < z) {

		*max = z;

	}

	*min = x;

	if (*min > y) {

		*min = y;

	}
	if (*min > z) {

		*min = z;

	}

}