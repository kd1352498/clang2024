#include<stdio.h>
main() {

	int data[10] = { 10,20,30,40,50,60,70,80,-999 };
	int* p_data;

	int i = 0;
	
	printf("ポインタを固定で表示\n");
	printf("配列　data[] = ");

	for (p_data = &data[0]; *(p_data + i) != -999; i++) {
		printf("%d, ", *(p_data + i));
	}

	printf("\n");
	
	printf("ポインタを変化させて表示\n");
	printf("配列　data[] =");
	
	for (p_data = &data[0]; *p_data != -999; p_data++) {
		printf(" %d,", *p_data);
	}
	
	printf("\n");

}