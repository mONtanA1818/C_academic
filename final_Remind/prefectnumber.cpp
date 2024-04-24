#include <stdio.h>

int main() {
	for (int n = 2; n <= 1000; n++) {
		int arr[50] = {0};
		int *p = arr;
		//计算所有的因子并导入数组
		for (int i = 1; i < n; i++) {
			if (n % i == 0) {
				*p = i;
				p++;
			};
		};
		//将所以的因子求和并检验是否满足完数的要求
		int sum = 0;
		p = arr;
		while (*p != 0) {
			sum += *p;
			p++;
		};
		//
		if (sum == n) {
			printf("%d its factors are ", n);
			p = arr;
			while (*p != 0) {
				printf("%d ", *p);
				p++;
			};
			printf("\n");
		};
	};
	return 0;
}