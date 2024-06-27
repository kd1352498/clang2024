//1102016kadai092.c
#include<stdio.h>
main() {

	int i, a[10] = { 10,20,30,40,50,60,70,80,90,100, }, c[10];

	printf("配列aから配列cにコピー");

	for (i = 0; i < 10; i++) {
		c[i] = a[i];
	}
	
	printf("\n配列 a =");

	for (i = 0; i < 10; i++) {
		printf("%4d", a[i]);
	}

	printf("\n配列 c =");

	for (i = 0; i < 10; i++) {
		printf("%4d", c[i]);
	}

	printf("\n");

}