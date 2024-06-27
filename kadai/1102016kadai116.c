//1102016kadai116.c
#include<stdio.h>
main() {

	int i = 0, j = 0;
	char a[256] = { 0 }, b[256] = { 0 };


	printf("•¶Žš—ñ‚P");
	scanf("%s", a);

	printf("•¶Žš—ñ‚Q");
	scanf("%s", b);

	while (a[i]) {

		i++;

	}
	while (b[j]) {

		a[i + j] = b[j];

		j++;

	}

	printf("%s\n", &a[0]);

}