#include<stdio.h>
#include<stdlib.h>		//�������g���Ƃ��ɕK�v
#include<time.h>		//�������g���Ƃ��ɕK�v
main() {

	int b;

	srand(time(0));		//������������(�V���b�t��)����
	rand();

	b = rand() % 41+10;			//0�`32767�͈̔͂ŗ��������߂�
	printf("b=%d\n", b);
}