#include<stdio.h>
main()
{
	int a, b, c, s;
	printf("������3����:");
	scanf("%d%d%d", &a, &b, &c);
	s = a + b + c;
	printf("���v=%d", s);
	printf("����=%.2f\n", (float)s / 3);
}