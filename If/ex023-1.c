#include<stdio.h>
main()
{
	int h=0, m=0, s=0, t;
	
	printf("秒数を入力:");
	scanf("%d", &t);
	
	if (t >= 0) {
		if (t <= 5000) {
			h = t / 3600;
			m = (t % 3600) / 60;
			s = t % 60;
			printf("%d 時間 %d 分 %d 秒\n", h, m, s);
		}
		else {
			printf("*****Error*****\n");
		}
	}
	else {
		printf("*****Error*****\n");
	}
}