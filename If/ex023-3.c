#include<stdio.h>
main()
{
	int e, a, b;
	printf("演算子を入力:");
	scanf("%d", &e);

	if (e == 1) {
		printf("2つの整数を入力:");
		scanf("%d%d", &a, &b);
		printf("%d\n", a + b);
	}
	else {
		if (e == 2) {
			printf("2つの整数を入力:");
			scanf("%d%d", &a, &b);
			printf("%d\n", a - b);
		}
		else{
			if (e == 3) {
				printf("2つの整数を入力:");
				scanf("%d%d", &a, &b);
				printf("%d\n", a * b);
			}
			else {
				if (e == 4) {
					printf("2つの整数を入力:");
					scanf("%d%d", &a, &b);
					printf("%d\n", a / b);
				}
				else {
					printf("*****Erorr*****\n");
				}
			}
		}
	}

}