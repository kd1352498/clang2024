#include<stdio.h>
main() {

	int a, b;

	printf("整数１？");
	scanf("%d", &a);

	printf("整数２？");
	scanf("%d", &b);

	if (a >= b) {
		if (a == b) {

			printf("%d と %d は等しい\n", a, b);

		}
		else {

			printf("%d のほうが %d より %d 大きい\n", a, b, a - b);

		}
	}
	else {

		printf("%d のほうが %d より %d 小さい\n", a, b, b - a);

	}

}