#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main() {

	int i, j = 1, s, target, work, data[100];

	srand(time(0));

	for (i = 0; i < 100; i++) {

		data[i] = i + 1;

	}
	for (i = 0; i < 100; i++) {

		target = rand() % 100;

		work = data[i];
		data[i] = data[target];
		data[target] = work;

	}
	
	printf("探索値sを入力:");
	scanf("%d", &s);
	
	for (i = 0; i < 10; i++) {
		if (s == data[i]) {
		
			printf("%d回目で見つかった。\n", i + 1);
			break;
		}
		j++;
	}
	if (i == 10) {
		
		printf("入力データ%dは見つからなかった。\n", s);
	}
	
	for (i = 0; i < j - 1; i++) {

		printf("data[%2d] = %2d\n", i, data[i]);

	}
}