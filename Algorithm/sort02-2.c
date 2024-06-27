/*シェーカーソート*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define CNT 20

main() {

	int d[CNT] = { 0 };
	int w;
	int i, j;
	int MIN = 0, MAX = CNT - 1;

	srand(time(0));
	rand();

	for (i = 0; i < CNT; i++) {			//重複なしの乱数を配列d[CNT]に挿入
		do {
			
			d[i] = rand() % 100;

			for (j = 0; j < i; j++) {
				if (d[i] == d[j]) {

					break;

				}
			}
		}while (i != j);
	}

	for (i = 0; i < CNT; i++) {

		printf("%3d", i);

	}

	putchar('\n');
	putchar('\n');
	
	for (i = 0; i < CNT; i++) {				//ソート前の数列を表示

		printf("%3d", d[i]);

	}

	putchar('\n');

	for (i = 0; i < CNT * 3; i++) {
		putchar('-');
	}

	putchar('\n');


	while (MIN < MAX) {
		for (i = MIN; i < MAX; i++) {		//行き
			if (d[i] > d[i + 1]) {			//ｉ番目とｉ＋１番目の比較

				w = d[i];
				d[i] = d[i + 1];
				d[i + 1] = w;

			}
		}
		for (i = MAX; i > MIN; i--) {		//帰り
			if (d[i] < d[i - 1]) {			//ｉ番目とｉー１番目の比較

				w = d[i];
				d[i] = d[i - 1];
				d[i - 1] = w;

			}
		}
		for (i = 0; i < CNT; i++) {			//１往復した後の結果を表示

			printf("%3d", d[i]);

		}
		
		putchar('\n');
		
		MIN++;								//行きの始点、帰りの終点を＋１ずらす
		MAX--;								//行きの終点、帰りの始点をー１ずらす

	}

	for (i = 0; i < CNT * 3; i++) {
		putchar('-');
	}

	putchar('\n');

	for (i = 0; i < CNT; i++) {				//ソート後の数列を表示

		printf("%3d", d[i]);

	}

	putchar('\n');

}