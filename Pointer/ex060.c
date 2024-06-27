#include<stdio.h>
main() {

	int cnt = 1;
	int flg = 0;
	
	char sch;
	char data[] = "Language";
	char* p_data;

	p_data = data;

	printf("data[] = %s\n", &data[0]);
	printf("ŒŸõ•¶š‚ÍH");
	scanf("%c", &sch);

	
	printf("ŒŸõŒ‹‰Ê‚ÍA");

	while (*p_data) {
		if (*p_data == sch) {
			
			printf(" %d ", cnt);
			flg = 1;

		}
		p_data++;
		cnt++;
	}
	if (flg == 0) {
	
		printf("Œ©‚Â‚©‚ç‚È‚©‚Á‚½...");
	
	}
	else {

		printf("•¶š–Ú‚Å‚·B\n");

	}
}