#include<stdio.h>
#include<stdlib.h>		//�������g���Ƃ��ɕK�v
#include<time.h>		//�������g���Ƃ��ɕK�v
main() {

	int a;

	srand(time(0));		//������������(�V���b�t��)����
	rand();

	a = rand() % 100;			//0�`32767�͈̔͂ŗ��������߂�
	printf("a=%d\n", a);
}