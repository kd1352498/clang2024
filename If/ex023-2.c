#include<stdio.h>
main()
{
	int y;
	
	printf("��������:");
	scanf("%d", &y);
	
	if (y % 400 == 0) {
		printf("���邤�N�ł��B\n");
		}
	else {
		if (y % 100 == 0) {
			printf("���邤�N�ł͂���܂���B\n");
		}
		else{
			if (y % 4 == 0) {
				printf("���邤�N�ł��B\n");
			}
			else {
				printf("���邤�N�ł͂���܂���B\n");
			}
		}
	}
}