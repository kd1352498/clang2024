#include<stdio.h>
main() {

	int cnt = 1;
	int flg = 0;
	
	char sch;
	char data[] = "Language";
	char* p_data;

	p_data = data;

	printf("data[] = %s\n", &data[0]);
	printf("���������́H");
	scanf("%c", &sch);

	
	printf("�������ʂ́A");

	while (*p_data) {
		if (*p_data == sch) {
			
			printf(" %d ", cnt);
			flg = 1;

		}
		p_data++;
		cnt++;
	}
	if (flg == 0) {
	
		printf("������Ȃ�����...");
	
	}
	else {

		printf("�����ڂł��B\n");

	}
}