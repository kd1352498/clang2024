#include<stdio.h>
main() {

	int num = 0, sum = 0, cnt = 0;

	while (1) {

		printf("整数（-999で終了）？");
		scanf("%d", &num);

		if (num == -999) {

			break;

		}
		
		sum += num;
		cnt++;

	}

	printf("合計 = %d\n", sum);
	printf("平均 = %.3f\n", (float)sum / cnt);
	
}