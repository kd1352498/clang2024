#include<stdio.h>
#include<stdlib.h>		//乱数を使うときに必要
#include<time.h>		//乱数を使うときに必要
main() {

	int dice;

	srand(time(0));		//乱数を初期化(シャッフル)する
	rand();						//randの空読み

	dice = rand() % 6 + 1;			//0～32767の範囲で乱数を求める
	printf("サイコロは%dです\n", dice);
}