#include<stdio.h>
main() {

	char e;

	printf("�A���t�@�x�b�g�H");
	scanf("%c", &e);

	switch (e) {
		case 'A':printf("America\nAustralia\n"); break;
		case 'a':printf("America\nAustralia\n"); break;
		case 'E':printf("England\n"); break;
		case 'e':printf("England\n"); break;
		case 'F':printf("France\n"); break;
		case 'f':printf("France\n"); break;
		case 'J':printf("Japan\n"); break;
		case 'j':printf("Japan\n"); break;
		default:printf("���̑��ł�\n"); break;
	}


}