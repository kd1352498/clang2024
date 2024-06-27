#include<stdio.h>
main() {

	int i ;
	char moji1[80], moji2[80],x[80];

	printf("•¶Žš—ñ1‚ð“ü—Í:");
	scanf("%s", &moji1[0]);

	printf("•¶Žš—ñ2‚ð“ü—Í:");
	scanf("%s", &moji2[0]);

	printf("moji1 = %s	", &moji1[0]);
	printf("moji2 = %s	", &moji2[0]);

	printf("\n“ü‚ê‘Ö‚¦‚é‚Æ\n");
	
	for (i = 0; x[i] = moji1[i]; i++);
	for (i = 0; moji1[i] = moji2[i]; i++);
	for (i = 0; moji2[i] = x[i]; i++);
	
	printf("moji1 = %s	", &moji1[0]);
	printf("moji2 = %s	\n", &moji2[0]);
}