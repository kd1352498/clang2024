#include<stdio.h>
main()
{
	int data, sum, cnt;
	float ave;
	
	sum = 0;
	ave = 0;
	data = 0;
	
	for (cnt = 0; data != -999; cnt++) {
		sum += data;
		ave = sum / (float)cnt;
		
		printf("数は?");
		scanf("%d", &data);
	}
	printf("合計=%d\t平均=%.2f\n",sum,ave);
}