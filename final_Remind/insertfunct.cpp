#include <stdio.h>
void insert(int a[], int n);

int main() {
//	int a[5] = {1, 2, 4, 5};
	int a[5];
	for (int i = 0; i < 4; i++) {
		printf("[%d]=", i + 1);
		scanf("%d", &a[i]);
	};
	printf("insert data=");
	int n = 3;
	scanf("%d", &n);
	insert(a, n);
	for (int i = 0; i < 5; i++) {
		printf("%d ", a[i]);
	};
}

void insert(int a[], int n) {
	int end = a[3];
	if (n > end) {
		a[4] = n;
	} else {
		for (int i = 0; i < 3; i++) {
			if (n < a[i]) {
				int t1, t2 = n;
				for (int j = i; j < 5; j++) {
					t1 = a[j];
					a[j] = t2;
					t2 = t1;
				};
				break;
			};
		};
	};
};