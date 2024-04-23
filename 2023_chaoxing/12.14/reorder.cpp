#include <stdio.h>
#include <malloc.h>
void reorder(int *a, int len);

int main() {
	printf("n=");
	int n;
	scanf("%d", &n);
	int *a;
	a = (int *)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	printf("input = ");
	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	reorder(a, n);
	printf("\noutput = ");
	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}

void reorder(int *a, int len) {
	for (int i = 0; i < (len / 2); i++) {
		int temp = a[i];
		a[i] = a[len - i - 1];
		a[len - i - 1] = temp;
	}
}