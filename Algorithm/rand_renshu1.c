#include<stdio.h>
#include<stdlib.h>		//乱数を使うときに必要
#include<time.h>		//乱数を使うときに必要
main() {

	int a;

	srand(time(0));		//乱数を初期化(シャッフル)する
	rand();

	a = rand() % 100;			//0～32767の範囲で乱数を求める
	printf("a=%d\n", a);
}