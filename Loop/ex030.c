#include<stdio.h>
main()
{
	int n,x;
	x = 0;

	printf("”‚ğ“ü‚ê‚Ä:");
	scanf("%d", &n);
	
	while (x <= 10) {
		printf("%d+%d=%d\n", n, x, n + x);
		x++;
	}
}