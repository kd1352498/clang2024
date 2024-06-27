#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main() {

	int i, j, k;

	srand(time(0));
	rand();
	
	for (i = 1; i <= 100; i++) {

		k = rand() % 300 + 1;

		printf("%4d", k);

		if (i % 10 == 0) {
			printf("\n");
		}
	}
}