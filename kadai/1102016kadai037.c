#include<stdio.h>
main() {

	int num;

	printf("0 から 100 までの整数？");
	scanf("%d", &num);

	if (num < 30 || 100 < num) {

		printf("その数値の判定結果は「１」です\n");

	}
	else {
		if (30 <= num && num < 50) {

			printf("その数値の判定結果は「2」です\n");

		}
		else {
			if (50 <= num && num < 80) {

				printf("その数値の判定結果は「３」です\n");

			}
			else {
				if (80 <= num && num < 90) {

					printf("その数値の判定結果は「４」です\n");

				}
				else {

					printf("その数値の判定結果は「5」です\n");

				}
			}
		}
	}

}