#include<stdio.h>
main() {
	
	int i;
	float box[3], s = 0;
	
	for (i = 0; i < 3; i++) {

		printf("実数を入力:");
		scanf("%f", &box[i]);
	
		s += box[i];

	}

	printf("合計は%.2fです\n", s);
	printf("平均は%.2fです\n", s / 3);
}