#include<stdio.h>
#include<stdlib.h>		//�������g���Ƃ��ɕK�v
#include<time.h>		//�������g���Ƃ��ɕK�v
main() {

	int dice;

	srand(time(0));		//������������(�V���b�t��)����
	rand();						//rand�̋�ǂ�

	dice = rand() % 6 + 1;			//0�`32767�͈̔͂ŗ��������߂�
	printf("�T�C�R����%d�ł�\n", dice);
}