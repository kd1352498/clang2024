#include<stdio.h>
void change(int* x, int* y);

main() {

	int a = 10, b = 20;

	printf("関数実行前の値：\n");
	printf("a = %d b = %d\n", a, b);

	change(&a, &b);

	printf("関数実行後の値：\n");
	printf("a = %d b = %d\n", a, b);

}
void change(int* x, int* y) {

	int w;

	w = *x;
	*x = *y;
	*y = w;

	return;

}