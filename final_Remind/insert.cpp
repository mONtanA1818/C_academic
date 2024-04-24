#include <stdio.h>

int main() {
	int a[11] = {1, 4, 6, 9, 13, 16, 28, 40, 100};
	printf("original array: ");
	for (int i = 0; i < 10; i++) {
		if (a[i] != 0) {
			printf("%5d", a[i]);
		};
	};
	int number;
	printf("\ninsert data:");
	scanf("%d", &number);
//	number = 5;
	int end = a[8];
	if (number > end) {
		a[10] = number;
	} else {
		for (int i = 0; i < 9; i++) {
			if (number < a[i]) {
				int t1 = a[i], t2;
				a[i] = number;
				for (int k = i + 1; k < 10; k++) {
					t2 = a[k];
					a[k] = t1;
					t1 = t2;
				};
				break;
			};
		};
	};
	printf("New array: ");
	for (int i = 0; i < 10; i++) {
		printf("%5d", a[i]);
	};

	return 0;
}