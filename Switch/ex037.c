#include<stdio.h>
main() {

	char e;
	
	printf("���Z�q������:");
	scanf("%c", &e);

	switch(e) {
		case '+':printf("���Z�ł�\n"); break;
		case '-':printf("���Z�ł�\n"); break;
		case '*':printf("��Z�ł�\n"); break;
		case '/':printf("���Z�ł�\n"); break;
		case '%':printf("���܂�ł�\n"); break;
		default:printf("���̑��ł�\n"); break;
	}
}