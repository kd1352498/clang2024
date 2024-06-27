#include<stdio.h>
#include<string.h>

struct profile {

	char name[20];
	int birth[3];
	char blood[5];

};
main() {

	struct profile data[5];
	struct profile* p;
	int i;

	p = data;

	for (i = 0; i < 5; i++) {

		printf("%dl–Ú\t(–¼‘O)\t\tF", i + 1);
		scanf("%s", (p + i)->name);

		printf("\t(¶”NŒŽ“ú)\tF");
		scanf("%d%d%d", &(p + i)->birth[0], &(p + i)->birth[1], &(p + i)->birth[2]);

		printf("\t(ŒŒ‰tŒ^)\tF");
		scanf("%s", (p + i)->blood);
	
	}
	for (i = 0; i < 5; i++) {
		if (strcmp((p + i)->blood, "A") == 0) {
			
			printf("%s[[%d ”N %d ŒŽ %d “ú¶ ŒŒ‰tŒ^[ %s Œ^\n"
				, (p + i)->name, (p + i)->birth[0], (p + i)->birth[1], (p + i)->birth[2], (p + i)->blood);
		
		}
	}

}