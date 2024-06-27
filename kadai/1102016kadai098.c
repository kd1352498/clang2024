//1102016kadai098.c
#include<stdio.h>
main() {

	int i, max = 0, min = 999;
	int data[10] = { 10,5,23,29,2,6,3,1,70,100 };

	
	printf("”z—ñ data = ");
	
	for (i = 0; i < 10; i++) {
		
		printf("%d ", data[i]);
		
		if (max < data[i]) {

			max = data[i];

		}
		if (min > data[i]) {

			min = data[i];

		}
	}

	printf("\nÅ‘å’l = %d\tÅ¬’l = %d\n", max, min);

}