#include<stdio.h>
main() {

	int num;

	printf("�����i-999�œ��͏I���j�H");
	scanf("%d", &num);

	while (num != -999) {
		
		printf("�W�i�� = %o\t�P�U�i�� = %x\n", num, num);

		printf("�����i-999�œ��͏I���j�H");
		scanf("%d", &num);
		
	}

}