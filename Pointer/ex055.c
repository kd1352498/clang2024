#include<stdio.h>
main() {

	int sum_a=0, a[] = { 11,22,33,44,55,66 };
	int* p_a;		//a�p�|�C���^
	
	float sum_b=0, b[] = { 11.1,22.2,33.3,44.4 };
	float* p_b;		//b�p�|�C���^

	int i;			//�J�E���^�[
	
	p_a = &a[0];	//a�̃A�h���X���
	
	for (i = 0; i < 6; i++) {		//6�񃋁[�v
		sum_a += *p_a;				//���v�ɑ�������
		p_a++;						//�|�C���^��i�߂�
	}
	
	p_b = &b[0];	//b�̃A�h���X���
	
	for (i = 0; i < 4; i++) {		//4�񃋁[�v
		sum_b += *p_b;				//���v�ɑ�������
		p_b++;						//�|�C���^��i�߂�
	}

	printf("�z��a ���v = %d\t���� = %.3f\n", sum_a, (float)sum_a / 6);
	printf("�z��b ���v = %.3f\t���� = %.3f\n", sum_b, sum_b / 4);



}