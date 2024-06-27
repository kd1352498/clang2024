#include<stdio.h>
main() {

	int a = 100, b = 200, x;
	int* p_a, * p_b;

	p_a = &a;
	p_b = &b;

	printf("é¿çsëO : a = %d	b = %d\n", a, b);
	
	x = *p_a;
	*p_a = *p_b;
	*p_b = x;

	printf("é¿çså„ : a = %d	b = %d\n", a, b);

}