#include <stdio.h>

int main() {
	float a[8] = {};
	for (int i = 0; i < 8; i++) {
		printf("float a[%d]=", i + 1);
		scanf("%f", &a[i]);
	};
	for (int i = 7 ; i > 0; i--) {
		for (int j = 0 ; j < i; j++) {
			if (a[j] > a[j + 1]) {
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			};
		};
	};

	for (int i = 0; i < 8; i++) {
		printf("%.2f ", a[i]);
	};
	return 0;
}