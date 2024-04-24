#include <stdio.h>
#include <stdlib.h>
//#define N 5
void reverse(int a[], int len);

int main() {
	printf("input n=");
	int n;
	scanf("%d", &n);
	int *p = (int *)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++) {
		printf("[%d]=", i + 1);
		scanf("%d", &p[i]);
	};
	reverse(p, n);
	for (int i = 0; i < n; i++) {
		printf("%d ", i + 1);
//		scanf("%d", &p[i]);
	};
	return 0;
}

void reverse(int a[], int len) {
	for (int i = 0; i < (len / 2); i++) {
		int temp = a[len - i - 1];
		a[len - i - 1] = a[i];
		a[i] = temp;
	}
}