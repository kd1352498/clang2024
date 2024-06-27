#include<stdio.h>
#define MapNum 3
#define W 10
#define H 5

typedef struct {

	int m_map[H][W];

} Map;

void SetMap(char* filename, Map* m);

void DrawMap(Map m);

main() {
	
	Map MapData;

	int select;
	char* MapFileName[MapNum] = { "map0.txt","map1.txt" ,"map2.txt" };

	printf("ƒ}ƒbƒvNo‚ð“ü—Í(0");

	for (int i = 1; i < MapNum; i++) {

		printf(",%d", i);

	}

	printf(")>");
	scanf("%d", &select);

	if (select >= 0 && select < MapNum) {

		SetMap(MapFileName[select], &MapData);

		DrawMap(MapData);
	}
}

void SetMap(char* filename, Map* m) {

	FILE* fp;
	
	int i, j;
	char ch;

	if (fp = fopen(filename, "r")) {

		for (i = 0; i < H; i++) {
			
			for (j = 0; j < W; j++) {

				ch = fgetc(fp);

				m->m_map[i][j] = ch - '0';
			}

			fgetc(fp);

		}
	}
}

void DrawMap(Map m) {

	int i, j;

	for (i = 0; i < H; i++) {

		for (j = 0; j < W; j++) {

			if (m.m_map[i][j] == 1) {

				printf("¡");

			}
			else {

				printf(" ");

			}
		}

		putchar('\n');

	}
}

