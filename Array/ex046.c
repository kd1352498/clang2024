#include<stdio.h>
main() {

	int i, j, gokei = 0;
	//�z��̐擪�v�f���̂ݏȗ��ł���
	int a[][3] = { { 10 , 20 , 30 } ,{ 1 , 2 , 3 } };

	for (j = 0; j <= 1; j++) {
		for (i = 0; i <= 2; i++) {
			printf("a[%d][%d]=%d\n", j, i, a[j][i]);
			gokei += a[j][i];
		}
		printf("%d�s�ڂ̍��v=%d\n\n", j, gokei);
	}
}