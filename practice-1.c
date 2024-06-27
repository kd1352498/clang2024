#include<stdio.h>
#include<string.h>
main() {

	char str[] = { "234ABS567" };
	char ch[256];
	int dt1, dt2;


	sscanf(str, "%d%s%d", &dt1, &ch, &dt2);
	printf("dt1 = %d\tch = %s\tdt2 = %d\n", dt1, ch, dt2);

}