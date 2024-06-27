#include<stdio.h>
main() {

	int i, cnt = 0;
	char moji = '!';

	for (i = 32; i <= 126; i++) {

		printf("%x %c  ", i, moji + cnt - 1);

		if (cnt % 10 == 9) {

			putchar('\n');

		}

		cnt++;

	}

	putchar('\n');

}