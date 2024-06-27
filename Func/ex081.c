#include<stdio.h>

int saidai(int* p,int number);
int saisho(int* p,int number);

main() {

	int number = 8;
	int a[8] = { 6,10,8,2,9,5,1,7 };
	int dai = 0, sho = 0;

	dai = saidai(a, number);
	sho = saisho(a, number);

	printf("Å‘å’l = %d\n", dai);
	printf("Å¬’l = %d\n", sho);

}
saidai(int* p, int number) {

	int i, dai = *p;

	for (i = 0; i < number; i++) {
		if (dai < *p) {

			dai = *p;
			
		}

		p++;

	}

	return(dai);

}
saisho(int* p, int number) {

	int i, sho = *p;

	for (i = 0; i < number; i++) {
		if (sho > *p) {

			sho = *p;
			
		}

		p++;

	}

	return(sho);

}