#include<stdio.h>
void shisoku(int x, int y, int* wa, int* sa, int* sk, int* sho);

main() {

	int a, b, c, d, e, f;

	printf("���l�P ?: ");
	scanf("%d", &a);
	printf("���l�Q ?: ");
	scanf("%d", &b);

	shisoku(a, b, &c, &d, &e, &f);
	
	puts("���l�P�Ɛ��l�Q�̎l�����Z");

	printf(" wa = %d sa = %d seki = %d shou = %d\n", c, d, e, f);

}
void shisoku(int x, int y, int* wa, int* sa, int* sk, int* sho) {

	*wa = x + y;
	*sa = x - y;
	*sk = x * y;
	*sho = x / y;

	return;

}