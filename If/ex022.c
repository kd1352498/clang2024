#include<stdio.h>
main()
{
	int y;
	printf("西暦を入力:");
	scanf("%d", &y);
	if (y >=1989) {
		printf("平成生まれです。\n");
	}
	else {
		printf("昭和生まれです。\n");
	}
}