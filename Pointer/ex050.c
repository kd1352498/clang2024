#include<stdio.h>
main() {

	int a = 100, b;	//�ϐ��̐錾
	int* p_a;		//�|�C���^�̐錾
	
	p_a = &a;		//�A�h���X�̃Z�b�g
	
	printf("a = %d\n", a);
	printf("&a = %d\n", &a);
	printf("p_a = %d\n", p_a);
	printf("*p_a = %d\n", *p_a);
	printf("&p_a = %d\n", &p_a);
}