#include <stdio.h>
int small(int a, int b);
int big(int a, int b);

int main() {
	int sum = 0, m, n;
	printf("������m��n��ֵ���м��ÿո����");
	scanf("%d %d", &m, &n);
//	printf ( "%d", small(m, n));
	for (int i = small(m, n); i <= big(m, n); i++) {
		sum += i;
	}
	printf("m~n֮������֮��Ϊ%d", sum);
	return 0;
}

int small(int a, int b) {
	int result = a < b ? a : b;
	return result;
}

int big(int a, int b) {
	int result = a > b ? a : b;
	return result;
}