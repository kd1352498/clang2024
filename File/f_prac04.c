#include<stdio.h>

#define Sol_Num 3

typedef struct {

	char Wname[20];
	int bullet;
	float atk;

} Weapon;

typedef struct {

	char name[20];
	int hp;
	Weapon wpn;

} Soldier;

void SetInfo(Soldier* s, char* filename);
void Display(Soldier* s);

main() {

	Soldier sols[Sol_Num];

	SetInfo(sols, "file04.txt");
	Display(sols);
	
}

void SetInfo(Soldier* s, char* filename) {

	FILE* fp;

	int i;

	if (fp = fopen(filename, "r")) {

		for (i = 0; i < Sol_Num; i++) {
			
			fscanf(fp, "%s%d%s%d%f",
				(s + i)->name, &(s + i)->hp, (s + i)->wpn.Wname, &(s + i)->wpn.bullet, &(s + i)->wpn.atk);
		
		}
		
		fclose(fp);

	}
	else {

		printf("ファイル読み込みエラー\n");

	}
}

void Display(Soldier* s) {

	int i;

	for (i = 0; i < Sol_Num; i++) {
		printf("名前 : %s\t\t体力　 : %3d\n", (s + i)->name, (s + i)->hp);
		printf("武器 : %s\t残弾数 : %3d\t攻撃力 : %.2f\n",
			(s + i)->wpn.Wname, (s + i)->wpn.bullet, (s + i)->wpn.atk);
		putchar('\n');
	}
}