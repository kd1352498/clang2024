//1102016kadai114.c
#include<stdio.h>
main() {

	int cnt = 0;
	char d[256];


	printf("文字列は？");
	scanf("%s", &d[0]);	

	while (d[cnt]) {

		cnt++;

	}

	printf("文字列 = %s\t文字数 = %d 文字\n", d, cnt);


}