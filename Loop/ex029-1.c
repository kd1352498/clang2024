#include<stdio.h>
main()
{
	int n;

	printf("数を入れて:");
	scanf("%d", &n);
	if (n > 0) {
		while (n > 0) {
			printf("*");
			n--;
		}
	}
	else {
		printf("*****Erorr*****");
	}
	printf("\n");
}