#include<stdio.h>
main() {

	int a;
	char e,dummy[256];

	printf("10�i���̐����H");
	scanf("%d", &a);
	
	gets(dummy);

	printf("�A���t�@�x�b�g�io or x or d�j�H");
	scanf("%c", &e);

	switch (e) {
		case 'o':printf("%o\n", a); break;
		case 'x':printf("%x\n", a); break;
		default:printf("%d\n", a); break;
	}

}