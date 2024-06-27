#include<stdio.h>
main(){
	
	int su, i, j, k;
	
	printf("êîÇÕ?");
	scanf("%d", &su);
	
	j = su+1;
	k = 0;
	
	do{

		i = 0;
		j--;

		do {

			printf(" ");
			i++;

		} while (i < j);
		
		i = 0;
		k++;

		do {
			
			printf("*");
			i++;
		
		} while (i < k);
		
		printf("\n");
		su--;
		

	} while (su > 0);

}