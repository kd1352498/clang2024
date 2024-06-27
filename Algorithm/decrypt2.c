#include<stdio.h>
main() {

	int i,x[20];
	char s[20], k[20];

	printf("ˆÃ†‰»•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢>");
	scanf("%s", &s[0]);
	printf("•œ†‰»ƒL[‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢>");
	scanf("%s", &k[0]);

	for (i = 0; k[i] != '\0'; i++) {
		x[i] = k[i] - '0';
	}
	for (i = 0; k[i] != '\0'; i++) {
		s[i] -= x[i];
	}

	printf("•œ†‰»Ï‚İ•¶š—ñ‚ÍA%s\n", &s[0]);

}