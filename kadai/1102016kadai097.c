//1102016kadai097.c
#include<stdio.h>
main() {

	int i;
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int c[10];

	
	printf("�z��a = ");

	for (i = 0; i < 10; i++) {

		printf("%d ", a[i]);

	}
	
	printf("\n�z��c = ");

	for (i = 9; i >= 0; i--) {

		c[i] = a[i];

		printf("%d ", c[i]);

	}

	putchar('\n');

}