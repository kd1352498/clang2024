#include<stdio.h>

void mojiretu(char* a, char* b);

main() {

	char a[256], b[256];

	printf("�z�� a�F");
	gets(a);
	
	printf("�z�� b�F");
	gets(b);

	mojiretu(a, b);

	printf("�z�� a�F%s\n", a);

}
void mojiretu(char* a, char* b) {

	int i, j;

	for (i = 0; *(a + i) != '\0'; i++);
	for (j = 0; *(a + i) = *(b + j); i++, j++);

}