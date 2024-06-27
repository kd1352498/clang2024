#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main() {

	int ans, num, cnt=1;

	srand(time(0));
	rand();
	
	ans = rand() % 100 + 1;

	printf("”“–‚ÄƒQ[ƒ€\n");
	printf("1`100‚Ü‚Å‚Ì”‚ğ­‚È‚¢‰ñ”‚Å“–‚Ä‚éƒQ[ƒ€\n\n");
	printf("”(1`100)‚ğ“ü—Í:");
	scanf("%3d", &num);

	while (ans != num) {
		
		if (num > ans) {
			printf("%d‚æ‚è¬‚³‚¢‚Å‚·\n", num);
		}
		if (num < ans) {
			printf("%d‚æ‚è‘å‚«‚¢‚Å‚·\n", num);
		}
		
		cnt++;

		printf("\n”(1`100)‚ğ“ü—Í:");
		scanf("%3d", &num);

	}
	printf("“–‚½‚è! %d‰ñ‚Å“–‚Ä‚Ü‚µ‚½\n", cnt);

}