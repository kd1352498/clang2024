#include<stdio.h>
main()
{
	int i,s;
	
	s = 0;

	for (i = 1; i <= 10; i++) {
		s = i + s;
		printf("1から%dまでの和=%d\n", i, s);

	}
}