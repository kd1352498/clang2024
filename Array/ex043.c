#include<stdio.h>
main(){

	int i = 0;
	char data[] = "orange";

	printf("文字列:%s\n", &data[0]);

	while (data[i] != '\0') {

		i++;

	}

	printf("文字数は%d文字\n", i);

}