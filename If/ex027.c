#include<stdio.h>
main()
{
	char c;

	printf("���������;");
	scanf("%c", &c);

	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
		if (c >= 'A' && c <= 'Z'){
			printf("�ϊ������%c\n", c + 32);
		}
		else {
			printf("�ϊ������%c\n", c - 32);
		}
	}
	else {
		printf("�A���t�@�x�b�g����͂��Ă�������\n");
	}
}