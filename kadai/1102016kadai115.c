//1102016kadai115.c
#include<stdio.h>
main() {

	int cnt = 0;
	char d[256];

	printf("������́H");
	scanf("%s", d);

	while (d[cnt]) {

		putchar(d[cnt]);
		putchar('\n');

		cnt++;

	}

}