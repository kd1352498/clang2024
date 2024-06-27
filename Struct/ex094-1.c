#include<stdio.h>
#include<string.h>

#define people 5

struct day {

	int nen;
	int tuki;
	int hi;

};
struct profile {

	char name[20];
	struct day date;
	char blood[5];

};

main() {

	struct profile data[people] = { {"H“c—T",1989,4,13,"A"},{"”nê^l",2000,2,6,"O"},{"’n“‡—º",1994,11,2,"AB"},{"ˆÉ’B—m“ñ",1983,12,20,"B"},{"‰|–{ãÄ",2007,2,1,"AB"} };
	struct profile* p;
	int i;

	p = data;

	for (i = 0; i < people; i++) {
		if ((p + i)->date.tuki == 2) {
			
			printf("%s[[%d ”N %d Œ %d “ú¶ ŒŒ‰tŒ^[ %s Œ^\n"
				, (p + i)->name, (p + i)->date.nen, (p + i)->date.tuki, (p + i)->date.hi, (p + i)->blood);
		
		}
	}

}