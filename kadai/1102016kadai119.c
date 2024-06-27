//1102016kadai119.c
#include<stdio.h>
main() {

	int i, j = 0;
	char day[7][10] = { "sunday","monday","tuesday","wednesday","thursday","friday","saturday" };

	for (i = 0; i < 7; i++) {		
		if (day[i][0] == 's') {
			while (day[i][j]) {

				putchar(day[i][j]);

				j++;

			}

			putchar('\n');

			j = 0;
		
		}
	}

}