#include<stdio.h>
main()
{
	int i,n,t;
	
	printf("数を入れて:");
	scanf("%d", &n);

	for (i = 1; i <= 5; i++) {
		printf("%d ", n * i);
	}
	printf("\n");
}