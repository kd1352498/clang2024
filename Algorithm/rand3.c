#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main() {

	int kaishinritu;

	srand(time(0));
	rand();

	kaishinritu= rand() % 100+1;
	
	if (kaishinritu <= 30) {
		printf("‚©‚¢‚µ‚ñ‚Ì‚¢‚¿‚°‚«I\n");
	}
	else {
		printf("’ÊíUŒ‚\n");
	}	
}