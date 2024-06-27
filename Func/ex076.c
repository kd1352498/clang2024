#include<stdio.h>
void gokei(int x, int y, int* sum, float* ave);

main() {

	int a, b, sum;
	float ave;

	printf("数値を２つ入力：");
	scanf("%d%d", &a,&b);

	gokei(a, b, &sum, &ave);

	printf("合計は %d、平均は %.2f\n", sum, ave);

}
void gokei(int x, int y, int* sum, float* ave) {

	*sum = x + y;
	*ave = *sum / 2.0;

	return;

}