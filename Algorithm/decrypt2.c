#include<stdio.h>
main() {

	int i,x[20];
	char s[20], k[20];

	printf("�Í������������͂��Ă�������>");
	scanf("%s", &s[0]);
	printf("�������L�[����͂��Ă�������>");
	scanf("%s", &k[0]);

	for (i = 0; k[i] != '\0'; i++) {
		x[i] = k[i] - '0';
	}
	for (i = 0; k[i] != '\0'; i++) {
		s[i] -= x[i];
	}

	printf("�������ςݕ�����́A%s\n", &s[0]);

}