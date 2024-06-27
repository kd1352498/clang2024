#include<stdio.h>
main() {

	int sum_a=0, a[] = { 11,22,33,44,55,66 };
	int* p_a;		//a用ポインタ
	
	float sum_b=0, b[] = { 11.1,22.2,33.3,44.4 };
	float* p_b;		//b用ポインタ

	int i;			//カウンター
	
	p_a = &a[0];	//aのアドレス代入
	
	for (i = 0; i < 6; i++) {		//6回ループ
		sum_a += *p_a;				//合計に足しこみ
		p_a++;						//ポインタを進める
	}
	
	p_b = &b[0];	//bのアドレス代入
	
	for (i = 0; i < 4; i++) {		//4回ループ
		sum_b += *p_b;				//合計に足しこみ
		p_b++;						//ポインタを進める
	}

	printf("配列a 合計 = %d\t平均 = %.3f\n", sum_a, (float)sum_a / 6);
	printf("配列b 合計 = %.3f\t平均 = %.3f\n", sum_b, sum_b / 4);



}