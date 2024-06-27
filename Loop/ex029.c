#include<stdio.h>
main()
{
	int n, x;
	x = 0;

	printf("”‚ð“ü‚ê‚Ä:");
	scanf("%d", &n);
	if (n > 0) {
		while (n > x) {
			printf("*");
			x++;
		}
	}
	else {
		printf("*****Erorr*****");
	}
	printf("\n");
}