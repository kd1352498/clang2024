#include<stdio.h>
main() {

	int n;

	printf("数字を入力:");
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
		printf("      終了\n");
	}
	else {
		printf("エラー\n");
	}
}