#include<stdio.h>
main() {

	int num = 0, sum = 0, cnt = 0;

	
	printf("�����i-999�ŏI���j�H");
	scanf("%d", &num);
		
	while (num != -999) {

		sum += num;
		cnt++;

		printf("�����i-999�ŏI���j�H");
		scanf("%d", &num);

	}

	printf("���v = %d\n", sum);
	printf("���� = %.2f\n", (float)sum / cnt);

}