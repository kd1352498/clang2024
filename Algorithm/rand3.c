#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main() {

	int kaishinritu;

	srand(time(0));
	rand();

	kaishinritu= rand() % 100+1;
	
	if (kaishinritu <= 30) {
		printf("かいしんのいちげき！\n");
	}
	else {
		printf("通常攻撃\n");
	}	
}