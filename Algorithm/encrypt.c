#include<stdio.h>
main() {

	int i;
	char s[16];

	printf("文字列を入力してください>");
	scanf("%s", &s[0]);

	for (i = 0; s[i] != '\0'; i++) {
		s[i]++;
	}
	printf("暗号化文字列は、%s\n", &s[0]);
}