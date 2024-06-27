#include<stdio.h>
main() {

	char moji;

	printf("‚P•¶š“ü—ÍH");
	scanf("%c", &moji);

	printf("•ÏŠ·Œ‹‰Ê‚Í ");
	
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