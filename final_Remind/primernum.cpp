#include <stdio.h>

int main() {
	while (1) {
		int m;
		printf("\n������һ����");
		int i;
		scanf("%d", &m);
		for (i = m - 1 ; i >= 2 ; i --) {
			if (m % i == 0) {
				i = 0;
				break;
			}
		};
		if (i == 0) {
			printf("�������������");
		};
		if (i) {
			printf("�����������");
		};
	}
	return 0;
}