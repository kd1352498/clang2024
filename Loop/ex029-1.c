#include<stdio.h>
main()
{
	int n;

	printf("��������:");
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