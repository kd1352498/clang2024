#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main() {

	int i, j, k;

	srand(time(0));
	rand();
	
	j = rand() % 3+1;
	
	
	printf("�����o���܂���?\n(1:�O�[ 2:�`���L 3:�p�[)> ");
	scanf("%d", &i);
	
	printf("\n�v���C���[�́A");
	
	switch (i){
		case 1:printf("�O�[");break;
		case 2:printf("�`���L");break;
		case 3:printf("�p�[");break;
	}
	
	printf("�ł��B\n�R���s���[�^�́A");
	
	switch (j) {
		case 1:printf("�O�["); break;
		case 2:printf("�`���L"); break;
		case 3:printf("�p�["); break;
	}
	
	printf("�ł��B\n\n");

	switch ((i - j + 3) % 3) {
		case 0:printf("�������ł��B\n"); break;
		case 1:printf("�v���C���[�̕����ł��B\n"); break;
		case 2:printf("�v���C���[�̏����ł��B\n"); break;
	}
}