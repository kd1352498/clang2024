//1102016kadai093.c
#include<stdio.h>
main() {

	int i;
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int b[10] = { 100,200,300,400,500,600,700,800,900,1000 };
	int c[10];

	printf("配列ａと配列ｂの加算結果を配列ｃに格納する\n配列a = ");

	for (i = 0; i < 10; i++) {

		printf("%d ", a[i]);

	}
	
	printf("\n配列b = ");
	
	for (i = 0; i < 10; i++) {

		printf("%d ", b[i]);

	}
	
	printf("\n配列c = ");
	
	for (i = 0; i < 10; i++) {

		c[i] = a[i] + b[i];
		
		printf("%d ", c[i]);

	}

	putchar('\n');

}