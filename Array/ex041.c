#include<stdio.h>
main() {
	
	int i;
	float box[3], s = 0;
	
	for (i = 0; i < 3; i++) {

		printf("ŽÀ”‚ð“ü—Í:");
		scanf("%f", &box[i]);
	
		s += box[i];

	}

	printf("‡Œv‚Í%.2f‚Å‚·\n", s);
	printf("•½‹Ï‚Í%.2f‚Å‚·\n", s / 3);
}