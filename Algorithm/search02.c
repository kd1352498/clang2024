#include<stdio.h>
main() {

	int i, s;

	printf("�T���l�����:");
	scanf("%d", &s);

	int d[11] = { 10,5,30,77,16,3,47,29,37,33,s };

	for (i = 0; s != d[i]; i++);
	if (i == 10) {
		printf("%d�͌�����Ȃ������B\n", s);
	}
	else{
		printf("�T���l%d���Ad[%d]�Ō��������B\n", s, i);
	}
}