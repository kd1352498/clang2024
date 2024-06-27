#include<stdio.h>
main() {

	int num = 0, cnt = 0,sum = 0;

	do {

		sum += num;
		cnt++;

		printf("整数（-999で終了）？");
		scanf("%d", &num);

	} while (num != -999);

	printf("合計 = %d\n", sum);
	printf("平均 = %f\n", (float)sum / (cnt - 1));

}