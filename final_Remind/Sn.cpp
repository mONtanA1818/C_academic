#include <stdio.h>

int main() {
	int n, t = 2;
	printf("������n��ֵ");
	scanf("%d", &n);
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += t;
		printf("%d\n", t);
		t = t * 10 + 2;
	}
	printf("Sn= %d", sum);
	return 0;
}