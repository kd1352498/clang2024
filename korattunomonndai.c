#include<stdio.h>
main() {

	int n;

	printf("���������:");
	scanf("%d", &n);
	printf("%10d\n",n);
	
	if (n >= 1) {
		while (n > 1) {
			if (n % 2 == 0) {
				n = n / 2;
			}
			else{
				n = n * 3 + 1;
			}
			printf("%10d\n", n);
		}
		printf("      �I��\n");
	}
	else {
		printf("�G���[\n");
	}
}