#include<stdio.h>
main() {

	int num = 0, cnt = 0,sum = 0;

	do {

		sum += num;
		cnt++;

		printf("�����i-999�ŏI���j�H");
		scanf("%d", &num);

	} while (num != -999);

	printf("���v = %d\n", sum);
	printf("���� = %f\n", (float)sum / (cnt - 1));

}