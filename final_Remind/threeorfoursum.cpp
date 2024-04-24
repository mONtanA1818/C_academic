#include <stdio.h>

int main() {
	int n, sum = 0;
	scanf("%d", &n);
//	n = 10;
	for (int i = 1; i <= n ; i++ ) {
		if (i % 3 == 0 || i % 4 == 0) {
			sum += i;
		}
	}
	printf("%d", sum);
	return 0;
}
