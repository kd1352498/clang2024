#include<stdio.h>
void cal(int x, int y, int z, int* max, int* min);

main() {

	int a, b, c, max, min;

	printf("整数を３つ入力：");
	scanf("%d%d%d", &a, &b, &c);

	cal(a, b, c, &max, &min);

	printf("最大値 = %d 最小値 = %d", max, min);

}
void cal(int x, int y, int z, int* max, int* min) {

	*max = x;

	if (*max < y) {

		*max = y;

	}
	if (*max < z) {

		*max = z;

	}

	*min = x;

	if (*min > y) {

		*min = y;

	}
	if (*min > z) {

		*min = z;

	}

}