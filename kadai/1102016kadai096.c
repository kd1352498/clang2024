//1102016kadai096.c
#include<stdio.h>
main() {

	int i = 0, cnt = 0;;
	int c[256];

	while (1) {

		printf("�����i-999�ŏI���j�H");
		scanf("%d", &c[i]);

		if (c[i] == -999) break;

		i++;
		cnt++;

	}

	printf("�z��c = ");

	for (i = 0; i < cnt; i++) {

		printf("%d ", c[i]);

	}

	putchar('\n');

}