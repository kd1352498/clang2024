#include<stdio.h>
main() {

	char moji;

	printf("�A���t�@�x�b�g�H");
	scanf("%c", &moji);

	if (('a' <= moji && moji <= 'z') || ('A' <= moji && moji <= 'Z')) {
		if ('a' <= moji && moji <= 'z') {

			printf("���̕����́u�������v�ł��B\n");

		}
		if ('A' <= moji && moji <= 'Z') {

			printf("���̕����́u�啶���v�ł��B\n");

		}
	}
	else {

		printf("ERROR\n");

	}

}