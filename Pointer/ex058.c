#include<stdio.h>
main() {

	int a[3], * p;

	p = a;
	a[0] = 10, a[1] = 20, a[2] = 30;
	printf(" *p･･･%d\n", *p);			//取り出した値をそのまま表示
	
	p = a;
	a[0] = 10, a[1] = 20, a[2] = 30;
	printf(" *p+1･･･%d\n", *p+1);		//取り出した値＋１表示
	
	p = a;
	a[0] = 10, a[1] = 20, a[2] = 30;
	printf(" *(p+1)･･･%d\n", *(p+1));	//アドレスを一つ分進めてから取り出す
	
	p = a;
	a[0] = 10, a[1] = 20, a[2] = 30;
	printf(" *p+=1･･･%d\n", *p+=1);		//先に取り出してから１増える
	
	p = a;
	a[0] = 10, a[1] = 20, a[2] = 30;
	printf(" *p++･･･%d\n", *p++);		//「後置き」は他の処理が先に行われる
	
	p = a;
	a[0] = 10, a[1] = 20, a[2] = 30;
	printf(" (*p)++･･･%d\n", (*p)++);	//「後置き」は他の処理が先に行われる
	
	p = a;
	a[0] = 10, a[1] = 20, a[2] = 30;
	printf(" *++p･･･%d\n", *++p);		//「前置き」は先に行われる
	
	p = a;
	a[0] = 10, a[1] = 20, a[2] = 30;
	printf(" ++*p･･･%d\n", ++*p);		//「前置き」は先に行われる

}