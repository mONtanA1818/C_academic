#include <stdio.h>

int main() {
	while (1) {
		int m;
		printf("\n请输入一个数");
		int i;
		scanf("%d", &m);
		for (i = m - 1 ; i >= 2 ; i --) {
			if (m % i == 0) {
				i = 0;
				break;
			}
		};
		if (i == 0) {
			printf("这个数不是素数");
		};
		if (i) {
			printf("这个数是素数");
		};
	}
	return 0;
}