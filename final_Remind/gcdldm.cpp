#include <stdio.h>
int small(int a, int b);
int big(int a, int b);

int main() {
	int m, n;
	printf("������m��n��ֵ���м�ʹ�ÿո����");
	scanf("%d %d", &m, &n);
//	m = 5, n = 3;
	int gcd, lcm;
	for (int i = small(m, n); i >= 1 ; i--) {
		if (m % i == 0 && n % i == 0) {
			gcd = i;
			break;
		}
	}
	int i = big(m, n);
//	printf("%d", i);
	while (1) {
		if ( i % m == 0 && i % n == 0) {
			lcm = i;
			break;
		}
		i++;
	};
	printf("���Լ��=%d ��С������=%d", gcd, lcm);
	return 0;
}

int small(int a, int b) {
	int result = a < b ? a : b;
	return result;
}

int big(int a, int b) {
	int result =  a > b ? a : b;
	return result;
}

