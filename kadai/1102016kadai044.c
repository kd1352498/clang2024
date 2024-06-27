#include<stdio.h>
main() {

	int num;

	printf("整数（-999で入力終了）？");
	scanf("%d", &num);

	while (num != -999) {
		
		printf("８進数 = %o\t１６進数 = %x\n", num, num);

		printf("整数（-999で入力終了）？");
		scanf("%d", &num);
		
	}

}