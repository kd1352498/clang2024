#include<stdio.h>

int MAX(int x, int y);

main() {

	int a, b;

	printf("2‚Â‚Ì®”H");
	scanf("%d%d", &a, &b);

	printf("max = %d\n", MAX(a, b));

}
int MAX(int x, int y) {

	int max;
	
	if (x > y) {

		max = x;

	}
	else {

		max = y;

	}

	return(max);

}