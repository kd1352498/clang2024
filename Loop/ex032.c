#include<stdio.h>
main()
{
	int i,n,t;
	
	printf("��������:");
	scanf("%d", &n);

	for (i = 1; i <= 5; i++) {
		printf("%d ", n * i);
	}
	printf("\n");
}