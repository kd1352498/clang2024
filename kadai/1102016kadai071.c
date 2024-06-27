#include<stdio.h>
main() {

	int a, b;
	char e;

	printf("®”‚PH");
	scanf("%d", &a);

	printf("®”‚QH");
	scanf("%d", &b);

	printf("‰‰ZqH");
	rewind(stdin);
	scanf("%c", &e);

	switch (e) {
		case '+':printf("%d + %d = %d\n", a, b, a + b); break;
		case '-':printf("%d - %d = %d\n", a, b, a - b); break;
		case '*':printf("%d * %d = %d\n", a, b, a * b); break;
		case '/':printf("%d / %d = %f\n", a, b, (float)a / b); break;
		default:printf("‚»‚Ì‘¼‚Å‚·\n"); break;
	}


}