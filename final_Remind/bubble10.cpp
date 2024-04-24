#include <stdio.h>
#define N 10

int main() {
	int a[N] = {0};
	for (int i = 0; i < N; i++) {
		printf("a[%d]=", i + 1);
		scanf("%d", &a[i]);
	};
	for (int i = N - 1; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (a[j] > a[j + 1]) {
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			};
		};
	};



	//outPut
	for (int i = 0; i < N; i++) {
		printf("%d ", a[i]);
	};
	return 0;
}