#include<stdio.h>
main() {

	char moji;

	printf("アルファベット？");
	scanf("%c", &moji);

	if ('a' <= moji && moji <= 'z') {

		printf("その文字は「小文字」です。\n");

	}
	if ('A' <= moji && moji <= 'Z') {

		printf("その文字は「大文字」です。\n");

	}



}