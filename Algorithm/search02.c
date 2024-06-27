#include<stdio.h>
main() {

	int i, s;

	printf("探索値を入力:");
	scanf("%d", &s);

	int d[11] = { 10,5,30,77,16,3,47,29,37,33,s };

	for (i = 0; s != d[i]; i++);
	if (i == 10) {
		printf("%dは見つからなかった。\n", s);
	}
	else{
		printf("探索値%dを、d[%d]で見つかった。\n", s, i);
	}
}