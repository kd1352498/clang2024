#include<stdio.h>
main()
{
	int m;

	printf("ŒŽ‚ð“ü—Í:");
	scanf("%d", &m);
	
	if (m >= 1 || m <= 12) {
		if (m == 2) {
			printf("ÅI“ú‚Í28“ú‚©29“ú‚Å‚·\n");
		}
		else {
			if (m == 4 || m == 6 || m == 9 || m == 11) {
				printf("ÅI“ú‚Í30“ú‚Å‚·\n");
			}
			else {
				printf("ÅI“ú‚Í31“ú‚Å‚·\n");
			}
		}
	}
	else {
		printf("‚»‚ñ‚ÈŒŽ‚Í‚ ‚è‚Ü‚¹‚ñ\n");

	}
}