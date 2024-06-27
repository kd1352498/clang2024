#include<stdio.h>
main() {

	int num;

	printf("整数？");
	scanf("%d", &num);

	if (num >= 0) {
		if (num == 0) {

			printf("入力値は「ゼロ」です。\n");

		}
		else {

			printf("入力値は「プラス」です。\n");

		}
	}
	else {

		printf("入力値は「マイナス」です。\n");
		
	}

}