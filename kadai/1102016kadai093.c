//1102016kadai093.c
#include<stdio.h>
main() {

	int i;
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int b[10] = { 100,200,300,400,500,600,700,800,900,1000 };
	int c[10];

	printf("zñÆzñÌÁZÊðzñÉi[·é\nzña = ");

	for (i = 0; i < 10; i++) {

		printf("%d ", a[i]);

	}
	
	printf("\nzñb = ");
	
	for (i = 0; i < 10; i++) {

		printf("%d ", b[i]);

	}
	
	printf("\nzñc = ");
	
	for (i = 0; i < 10; i++) {

		c[i] = a[i] + b[i];
		
		printf("%d ", c[i]);

	}

	putchar('\n');

}