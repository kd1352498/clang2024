#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main() {

	int un;

	srand(time(0));
	rand();

	un = rand() % 5 + 1;
	
	printf("�����̂��Ȃ��̉^����");
	for (; un > 0; un--) {
		printf("�� ");
	}
	printf("�ł��B\n");
}