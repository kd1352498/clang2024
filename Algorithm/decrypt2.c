#include<stdio.h>
main() {

	int i,x[20];
	char s[20], k[20];

	printf("暗号化文字列を入力してください>");
	scanf("%s", &s[0]);
	printf("復号化キーを入力してください>");
	scanf("%s", &k[0]);

	for (i = 0; k[i] != '\0'; i++) {
		x[i] = k[i] - '0';
	}
	for (i = 0; k[i] != '\0'; i++) {
		s[i] -= x[i];
	}

	printf("復号化済み文字列は、%s\n", &s[0]);

}