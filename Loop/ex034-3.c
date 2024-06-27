#include<stdio.h>
main(){
	
	int su, i, j;
	j = 0;
	
	printf("êîÇÕ?");
	scanf("%d", &su);
	
	do{

		i = 0;
		j++;

		do {
			
			printf("*");
			i++;
		
		} while (i < j);
		
		printf("\n");
		su--;
		

	} while (su > 0);

}