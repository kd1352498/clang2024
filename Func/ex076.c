#include<stdio.h>
void gokei(int x, int y, int* sum, float* ave);

main() {

	int a, b, sum;
	float ave;

	printf("���l���Q���́F");
	scanf("%d%d", &a,&b);

	gokei(a, b, &sum, &ave);

	printf("���v�� %d�A���ς� %.2f\n", sum, ave);

}
void gokei(int x, int y, int* sum, float* ave) {

	*sum = x + y;
	*ave = *sum / 2.0;

	return;

}