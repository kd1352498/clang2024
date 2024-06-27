#include<stdio.h>
main() {

	int c = 0;
	char moji[256];

	while (c != EOF) {

		printf("文字（＾ｚで終了）？");
		
		gets(moji);
		c = getchar();
		putchar(c);
		putchar('\n');
		
	}





}