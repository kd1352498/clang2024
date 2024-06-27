#include<stdio.h>
main() {

	char e;

	printf("アルファベット？");
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
		default:printf("その他です\n"); break;
	}


}