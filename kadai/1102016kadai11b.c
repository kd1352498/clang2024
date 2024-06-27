//1102016kadai11b.c
#include<stdio.h>
main() {

	int i;
	char day[7][10] = { "sunday","monday","tuesday","wednesday","thursday","friday","saturday" };

	printf("”’l‚ÍHi‚O`‚Uj");
	scanf("%d", &i);

	if (0 <= i && i <= 6) {
	
		printf("%s\n", day[i]);
	
	}
	else {

		printf("error\n");

	}

}