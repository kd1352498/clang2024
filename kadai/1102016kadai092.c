//1102016kadai092.c
#include<stdio.h>
main() {

	int i, a[10] = { 10,20,30,40,50,60,70,80,90,100, }, c[10];

	printf("�z��a����z��c�ɃR�s�[");

	for (i = 0; i < 10; i++) {
		c[i] = a[i];
	}
	
	printf("\n�z�� a =");

	for (i = 0; i < 10; i++) {
		printf("%4d", a[i]);
	}

	printf("\n�z�� c =");

	for (i = 0; i < 10; i++) {
		printf("%4d", c[i]);
	}

	printf("\n");

}