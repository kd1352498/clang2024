#include<stdio.h>
main() {

	int num = 0, sum = 0, cnt = 0;

	while (1) {

		printf("�����i-999�ŏI���j�H");
		scanf("%d", &num);

		if (num == -999) {

			break;

		}
		
		sum += num;
		cnt++;

	}

	printf("���v = %d\n", sum);
	printf("���� = %.3f\n", (float)sum / cnt);
	
}