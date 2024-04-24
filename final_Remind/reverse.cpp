#include <stdio.h>
#define N 7

int main() {
	int a[N] = {1, 2, 3, 4, 5, 6, 7};
//	for (int i = 0; i < 5; i++) {
//		scanf("%d", &a[i]);
//	};
	for (int j = 0; j <= (N / 2 - 1); j++) {
		int temp = a[N - 1 - j];
		a[N - 1 - j] = a[j];
		a[j] = temp;
	};
	for (int i = 0; i < N; i++) {
		printf("%d ", a[i]);
	};
	return 0;
}