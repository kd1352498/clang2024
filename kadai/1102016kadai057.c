#include<stdio.h>
main() {

	int i;
	char moji;

	printf("�A���t�@�x�b�g�������H");
	scanf("%c", &moji);

	for (i = 0; i <= 'z' - moji; i++) {

		printf("%c ", moji + i - 32);

	}

	putchar('\n');

}