//1102016kadai099.c
#include<stdio.h>
main() {

	int cnt;
	char data[256];

	printf("回数と文字列を入力　");
	scanf("%d%s", &cnt, &data[0]);

	for (; cnt > 0; cnt--) {

		printf("%s　", data);

	}

	putchar('\n');

}