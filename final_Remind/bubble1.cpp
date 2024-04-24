#include <stdio.h>

int main() {
	int a[5] = {2, 5, 4, 1, 3};
	for (int i = 4; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (a[j] > a[j + 1]) {
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			};
		};
	};
	for (int i = 0; i < 5; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}