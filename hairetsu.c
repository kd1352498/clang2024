#include<stdio.h>
main() {
	
	int i, data[5];
	//�����^�ϐ�i�Ɨv�f��5�̔z��data��錾

	for (i = 0; i < 5; i++) {
		//i��0�`4�ɕω�(�z��̓Y�����p)
		printf("�z��data[%d]=", i);
		//���͂𑣂�
		scanf("%d", &data[i]);
		//�z��data�̓Y������ύX���ē���
	}
	
	for (i = 0; i < 5; i++) {
		printf("data[%d]=%d\n", i, data[i]);
		//�Y������0�`4�܂ŕύX���Ȃ���\��
	}
}