#include<stdio.h>
main() {

	int num;

	printf("0 ���� 100 �܂ł̐����H");
	scanf("%d", &num);

	if (num < 30 || 100 < num) {

		printf("���̐��l�̔��茋�ʂ́u�P�v�ł�\n");

	}
	else {
		if (30 <= num && num < 50) {

			printf("���̐��l�̔��茋�ʂ́u2�v�ł�\n");

		}
		else {
			if (50 <= num && num < 80) {

				printf("���̐��l�̔��茋�ʂ́u�R�v�ł�\n");

			}
			else {
				if (80 <= num && num < 90) {

					printf("���̐��l�̔��茋�ʂ́u�S�v�ł�\n");

				}
				else {

					printf("���̐��l�̔��茋�ʂ́u5�v�ł�\n");

				}
			}
		}
	}

}