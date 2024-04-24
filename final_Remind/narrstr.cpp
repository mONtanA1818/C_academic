#include <stdio.h>
#include <stdlib.h>
void porcess(int *p, int n, int m);

int main() {
	int n, m;
	printf("input N=");
	scanf("%d", &n);
	printf("inPut M=");
	scanf("%d", &m);
	int *p = (int *)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++) {
		printf("[%d]=", i);
		scanf("%d", &p[i]);
	}
	porcess(p, n, m);
	for (int i = 0; i < n; i++) {
		printf("%d ", p[i]);
	};
	free(p);
	return 0;
}

void porcess(int *p, int n, int m) {
	int *a = (int *)malloc((n - m) * sizeof(int));
	int *b = (int *)malloc(m * sizeof(int));
	for (int i = 0; i < n - m; i++) {
		a[i] = p[i];
	};
	for (int i = n - m; i < n; i++) {
		b[i + m - n] = p[i];
	};

	//


	for (int i = 0; i < m; i++) {
		p[i] = b[i];
	};

	//
	for (int i = m; i < n; i++) {
		p[i] = a[i - m];
	};

	free(a);
	free(b);
}