#include<stdio.h>
main() {

	int a;
	char e,dummy[256];

	printf("10進数の整数？");
	scanf("%d", &a);
	
	gets(dummy);

	printf("アルファベット（o or x or d）？");
	scanf("%c", &e);

	switch (e) {
		case 'o':printf("%o\n", a); break;
		case 'x':printf("%x\n", a); break;
		default:printf("%d\n", a); break;
	}

}