#include<stdio.h>
main() {

	int num = 0, sum = 0, cnt = 0;

	
	printf("整数（-999で終了）？");
	scanf("%d", &num);
		
	while (num != -999) {

		sum += num;
		cnt++;

		printf("整数（-999で終了）？");
		scanf("%d", &num);

	}

	printf("合計 = %d\n", sum);
	printf("平均 = %.2f\n", (float)sum / cnt);

}