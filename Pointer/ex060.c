#include<stdio.h>
main() {

	int cnt = 1;
	int flg = 0;
	
	char sch;
	char data[] = "Language";
	char* p_data;

	p_data = data;

	printf("data[] = %s\n", &data[0]);
	printf("検索文字は？");
	scanf("%c", &sch);

	
	printf("検索結果は、");

	while (*p_data) {
		if (*p_data == sch) {
			
			printf(" %d ", cnt);
			flg = 1;

		}
		p_data++;
		cnt++;
	}
	if (flg == 0) {
	
		printf("見つからなかった...");
	
	}
	else {

		printf("文字目です。\n");

	}
}