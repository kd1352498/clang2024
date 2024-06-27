#include<stdio.h>
#include<stdlib.h>		//乱数を使うときに必要
#include<time.h>		//乱数を使うときに必要
main() {

	int b;

	srand(time(0));		//乱数を初期化(シャッフル)する
	rand();

	b = rand() % 41+10;			//0～32767の範囲で乱数を求める
	printf("b=%d\n", b);
}