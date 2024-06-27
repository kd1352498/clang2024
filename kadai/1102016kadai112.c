//1102016kadai112.c
#include<stdio.h>
main() {

	int i = 0;
	char data1[] = "abcde";
	char data2[256] = { 0 };


	printf("（コピー元）配列 data1[] = %s\n", &data1[0]);

	while (data1[i]) {

		data2[i] = data1[i];

		i++;

	}

	printf("（コピー先）配列 data2[] = %s\n", &data2[0]);

}