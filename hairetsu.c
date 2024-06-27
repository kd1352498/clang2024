#include<stdio.h>
main() {
	
	int i, data[5];
	//整数型変数iと要素数5つの配列dataを宣言

	for (i = 0; i < 5; i++) {
		//iを0～4に変化(配列の添え字用)
		printf("配列data[%d]=", i);
		//入力を促す
		scanf("%d", &data[i]);
		//配列dataの添え字を変更して入力
	}
	
	for (i = 0; i < 5; i++) {
		printf("data[%d]=%d\n", i, data[i]);
		//添え字を0～4まで変更しながら表示
	}
}