#include<stdio.h>
main() {

	int a = 5, b = 3, work;

	printf("�����O\n");
	printf("a = %d\nb = %d\n", a, b);

	a = a + b;
	b = a - b;
	a = a - b;

	printf("������\n");
	printf("a = %d\nb = %d\n", a, b);

}