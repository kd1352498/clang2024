#include<stdio.h>
main() {
	
	int i;
	float box[3], s = 0;
	
	for (i = 0; i < 3; i++) {

		printf("���������:");
		scanf("%f", &box[i]);
	
		s += box[i];

	}

	printf("���v��%.2f�ł�\n", s);
	printf("���ς�%.2f�ł�\n", s / 3);
}