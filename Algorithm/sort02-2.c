/*�V�F�[�J�[�\�[�g*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define CNT 20

main() {

	int d[CNT] = { 0 };
	int w;
	int i, j;
	int MIN = 0, MAX = CNT - 1;

	srand(time(0));
	rand();

	for (i = 0; i < CNT; i++) {			//�d���Ȃ��̗�����z��d[CNT]�ɑ}��
		do {
			
			d[i] = rand() % 100;

			for (j = 0; j < i; j++) {
				if (d[i] == d[j]) {

					break;

				}
			}
		}while (i != j);
	}

	for (i = 0; i < CNT; i++) {

		printf("%3d", i);

	}

	putchar('\n');
	putchar('\n');
	
	for (i = 0; i < CNT; i++) {				//�\�[�g�O�̐����\��

		printf("%3d", d[i]);

	}

	putchar('\n');

	for (i = 0; i < CNT * 3; i++) {
		putchar('-');
	}

	putchar('\n');


	while (MIN < MAX) {
		for (i = MIN; i < MAX; i++) {		//�s��
			if (d[i] > d[i + 1]) {			//���ԖڂƂ��{�P�Ԗڂ̔�r

				w = d[i];
				d[i] = d[i + 1];
				d[i + 1] = w;

			}
		}
		for (i = MAX; i > MIN; i--) {		//�A��
			if (d[i] < d[i - 1]) {			//���ԖڂƂ��[�P�Ԗڂ̔�r

				w = d[i];
				d[i] = d[i - 1];
				d[i - 1] = w;

			}
		}
		for (i = 0; i < CNT; i++) {			//�P����������̌��ʂ�\��

			printf("%3d", d[i]);

		}
		
		putchar('\n');
		
		MIN++;								//�s���̎n�_�A�A��̏I�_���{�P���炷
		MAX--;								//�s���̏I�_�A�A��̎n�_���[�P���炷

	}

	for (i = 0; i < CNT * 3; i++) {
		putchar('-');
	}

	putchar('\n');

	for (i = 0; i < CNT; i++) {				//�\�[�g��̐����\��

		printf("%3d", d[i]);

	}

	putchar('\n');

}