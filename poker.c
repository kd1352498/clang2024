#include<stdio.h>
#include<string.h>

struct card_data {

	char name[10];
	char num[2];
	int rank[52];

};

main() {

	struct card_data card[4][13][52];
	struct card_data* p_card;
	int i, j, k = 1;

	p_card = &card[0][0][0];

	for (i = 0; i < 13; i++) {
	
		strcpy(card[0][i][i].name, "スペード");

	}
	for (i = 0; i < 13; i++) {
	
		strcpy(card[1][i][i + 13].name, "ハート");

	}
	for (i = 0; i < 13; i++) {
	
		strcpy(card[2][i][i + 26].name, "ダイヤ");

	}
	for (i = 0; i < 13; i++) {
	
		strcpy(card[3][i][i + 39].name, "クラブ");

	}
	for (i = 0; i < 4; i++) {

		strcpy(card[i][0][i * 13].num, "A");

	}
	for (i = 0; i < 4; i++) {

		strcpy(card[i][10][i * 13 + 10].num, "J");

	}
	for (i = 0; i < 4; i++) {

		strcpy(card[i][11][i * 13 + 11].num, "Q");

	}
	for (i = 0; i < 4; i++) {

		strcpy(card[i][12][i * 13 + 12].num, "K");

	}
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 8; j++) {

			strcpy(card[i][j+1][k++].num, "K");

		}

		k += 5;

	}


	for (i = 0; i < 52; i++) {

		printf("%s,%s", p_card->name, p_card->num);

		p_card++;

	}


}