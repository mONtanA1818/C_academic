#include <stdio.h>
#define N 10
void sort(int *a, int n);

int main() {
	int a[N] = {22, 54, 12, 41, 9, 3, 6, 1, 21, 63};
	int *p = a;
	sort(a, N);
	for (int i = 0; i < N; i++) {
		printf("%5d", a[i]);
	};
	return 0;
}

void sort(int *a, int n) {
	int i, j;
	for (i = 0; i < N; i++) {
		int minid = i;
		for ( j = i; j < N; j++) {
			if (a[minid] > a[j]) {
				minid = j;
			};
		};
		if (i != minid) {
			int temp = a[i];
			a[i] = a[minid];
			a[minid] = temp;
		};
	};
};