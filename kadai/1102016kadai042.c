//1102016 kadai042.c
#include<stdio.h>
main()
{
	int x,s;
	
	x = 1;
	s = 0;

	while (s <= 300) {
		s = s + x;
		printf("%d+", x);
		x++;
	}
	printf("\b=%d\n", s);
}