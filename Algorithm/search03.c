#include<stdio.h>
main() {

	int s, low, mid, high;
	int d[11] = { 10,15,18,23,28,35,47,55,68,78,96 };

	printf("�T���l�����:");
	scanf("%d", &s);

	for (low = 0, high = 10; low <= high;) {

		mid = (low + high) / 2;

		if (s == d[mid]) {
			break;
		}
		if (s > d[mid]) {
			low = mid + 1;
		}
		else if (s < d[mid]) {
			high = mid - 1;
		}
	}
	if (low > high) {
		printf("%d�͌�����Ȃ������B\n", s);
	}
	else {
		printf("�T���l%d���Ad[%d]�Ō��������B\n", s, mid);
	}
}