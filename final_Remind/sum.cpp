#include <stdio.h>
int small(int a, int b);
int big(int a, int b);

int main() {
	int sum = 0, m, n;
	printf("请输入m和n的值，中间用空格隔开");
	scanf("%d %d", &m, &n);
//	printf ( "%d", small(m, n));
	for (int i = small(m, n); i <= big(m, n); i++) {
		sum += i;
	}
	printf("m~n之间所有之和为%d", sum);
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