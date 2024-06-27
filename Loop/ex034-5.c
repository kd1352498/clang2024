#include<stdio.h>
main() {

	int su, i, j, k;

	printf("”‚Í?");
	scanf("%d", &su);

	j = su;
	k = 0;
	
	for (; su > 0; su--) {

		for (i = 1; i <= j-1; i++) {

			printf(" ");

		}
		j--;

		for (i = 0; i <= k; i++) {

			printf("*");

		}
		k++;

		printf("\n");

	}
}