#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main() {

	int ans, num, cnt=1;

	srand(time(0));
	rand();
	
	ans = rand() % 100 + 1;

	printf("�����ăQ�[��\n");
	printf("1�`100�܂ł̐������Ȃ��񐔂œ��Ă�Q�[��\n\n");
	printf("��(1�`100)�����:");
	scanf("%3d", &num);

	while (ans != num) {
		
		if (num > ans) {
			printf("%d��菬�����ł�\n", num);
		}
		if (num < ans) {
			printf("%d���傫���ł�\n", num);
		}
		
		cnt++;

		printf("\n��(1�`100)�����:");
		scanf("%3d", &num);

	}
	printf("������! %d��œ��Ă܂���\n", cnt);

}