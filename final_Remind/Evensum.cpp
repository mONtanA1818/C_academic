#include <stdio.h>

int main() {
	int m, n, sum;
	scanf("%d %d", &m, &n);
	int i = m;
	do {
		if (i % 2 == 0) {
			sum += i;
		}
		i++;
	} while (i <= n);
	printf("%d", sum);
	return 0;
}