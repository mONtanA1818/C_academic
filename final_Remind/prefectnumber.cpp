#include <stdio.h>

int main() {
	for (int n = 2; n <= 1000; n++) {
		int arr[50] = {0};
		int *p = arr;
		//�������е����Ӳ���������
		for (int i = 1; i < n; i++) {
			if (n % i == 0) {
				*p = i;
				p++;
			};
		};
		//�����Ե�������Ͳ������Ƿ�����������Ҫ��
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