#include<stdio.h>
main()
{
	int h=0, m=0, s=0, t;
	
	printf("•b”‚ð“ü—Í:");
	scanf("%d", &t);
	
	if (t >= 0) {
		if (t <= 5000) {
			h = t / 3600;
			m = (t % 3600) / 60;
			s = t % 60;
			printf("%d ŽžŠÔ %d •ª %d •b\n", h, m, s);
		}
		else {
			printf("*****Error*****\n");
		}
	}
	else {
		printf("*****Error*****\n");
	}
}