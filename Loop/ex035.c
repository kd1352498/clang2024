#include<stdio.h>
main() {

	int i, s;

	s = 0;

	while (1) {
		
		printf("数を入れて:");
		scanf("%d", &i);
		
		if (i == -999) { break; }
		
		s += i;
	}
	printf("合計 = %d\n", s);
}