#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main() {

	int ans, num, cnt=1;

	srand(time(0));
	rand();
	
	ans = rand() % 100 + 1;

	printf("数当てゲーム\n");
	printf("1〜100までの数を少ない回数で当てるゲーム\n\n");
	printf("数(1〜100)を入力:");
	scanf("%3d", &num);

	while (ans != num) {
		
		if (num > ans) {
			printf("%dより小さいです\n", num);
		}
		if (num < ans) {
			printf("%dより大きいです\n", num);
		}
		
		cnt++;

		printf("\n数(1〜100)を入力:");
		scanf("%3d", &num);

	}
	printf("当たり! %d回で当てました\n", cnt);

}