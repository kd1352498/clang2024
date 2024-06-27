#include<stdio.h>
main() {

	int i, s;

	s = 0;

	while (1) {
		
		printf("”‚ğ“ü‚ê‚Ä:");
		scanf("%d", &i);
		
		if (i == -999) { break; }
		
		s += i;
	}
	printf("‡Œv = %d\n", s);
}