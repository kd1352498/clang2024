#include<stdio.h>
main() {

	int a = 100, b;	//変数の宣言
	int* p_a;		//ポインタの宣言
	
	p_a = &a;		//アドレスのセット
	
	printf("a = %d\n", a);
	printf("&a = %d\n", &a);
	printf("p_a = %d\n", p_a);
	printf("*p_a = %d\n", *p_a);
	printf("&p_a = %d\n", &p_a);
}