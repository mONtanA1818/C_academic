#include <stdio.h>
#define N 10

int main() {
	int a[N][N] = {{1}, {1, 1}};
	for (int i = 2; i < N; i++) {
		int j = 0;
		a[i][j] = 1;
		for (j = 1; j < i; j++) {
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
		};
		a[i][j] = 1;
	};
	///
	for (int k = 0; k < N; k++) {
		for (int q = 0; q <= k; q++) {
			printf("%d ", a[k][q]);
		};
		printf("\n");
	};

	//
	return 0;
}