#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main() {

	int i, j, k;

	srand(time(0));
	rand();
	
	j = rand() % 3+1;
	
	
	printf("何を出しますか?\n(1:グー 2:チョキ 3:パー)> ");
	scanf("%d", &i);
	
	printf("\nプレイヤーは、");
	
	switch (i){
		case 1:printf("グー");break;
		case 2:printf("チョキ");break;
		case 3:printf("パー");break;
	}
	
	printf("です。\nコンピュータは、");
	
	switch (j) {
		case 1:printf("グー"); break;
		case 2:printf("チョキ"); break;
		case 3:printf("パー"); break;
	}
	
	printf("です。\n\n");

	switch ((i - j + 3) % 3) {
		case 0:printf("あいこです。\n"); break;
		case 1:printf("プレイヤーの負けです。\n"); break;
		case 2:printf("プレイヤーの勝ちです。\n"); break;
	}
}