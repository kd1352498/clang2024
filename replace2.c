#include<stdio.h>
main() {

	int a = 5, b = 3, work;

	printf("処理前\n");
	printf("a = %d\nb = %d\n", a, b);

	a = a + b;
	b = a - b;
	a = a - b;

	printf("処理後\n");
	printf("a = %d\nb = %d\n", a, b);

}