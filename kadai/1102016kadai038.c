#include<stdio.h>
main() {

	char moji;

	printf("１文字入力？");
	scanf("%c", &moji);

	printf("変換結果は ");
	
	if (('a' <= moji && moji <= 'z') || ('A' <= moji && moji <= 'Z')) {
		if ('a' <= moji && moji <= 'z') {

			printf("%c\n", moji - 32);

		}
		if ('A' <= moji && moji <= 'Z') {

			printf("%c\n", moji + 32);

		}
	}
	else {

		printf("%c\n",moji);

	}



}