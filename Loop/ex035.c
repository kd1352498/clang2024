#include<stdio.h>
main() {

	int i, s;

	s = 0;

	while (1) {
		
		printf("��������:");
		scanf("%d", &i);
		
		if (i == -999) { break; }
		
		s += i;
	}
	printf("���v = %d\n", s);
}