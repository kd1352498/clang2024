//1102016kadai084.c
#include<stdio.h>
main() {

	int num1 = 0, num2 = 0;

	while (1) {

		printf("�����P�i-999�ŏI���j�H");
		scanf("%d", &num1);

		if (num1 == -999) break;

		printf("�����Q�i-999�ŏI���j�H");
		scanf("%d", &num2);

		if (num2 == -999) break;
		if (num2 == 0) continue;

		printf("%d / %d = %d ���܂� %d\n", num1, num2, num1 / num2, num1 % num2);

	}

	putchar('\n');

}