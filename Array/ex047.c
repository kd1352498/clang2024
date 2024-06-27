#include<stdio.h>
main() {

	int i, j;
	float sum, x[3][2];

	for (i = 0; i <3 ; i++) {
		for (j = 0; j < 2; j++) {
			printf("x[%d][%d] = ", i, j);
			scanf("%f", &x[i][j]);
		}
		sum = x[i][0] + x[i][1];
		printf("%ds–Ú‚Ì•½‹Ï = %.2f\n\n", i, sum / 2);
	}
}