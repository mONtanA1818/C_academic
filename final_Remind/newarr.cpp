#include <stdio.h>
int sumf(int *a);
int evenf(int *a);

int main() {
	int a[10] = {4, 1, 32, 54, 83, 3, 75, 23, 46, 23};
	int *p = a;
	int sum = 0;
	sum = sumf(p);
	printf("sum=%d\n", sum);
	float avg;
	avg = (float)sum / 10;
	printf("avg=%.2f\n", avg);
	p = a;
	int evenN = evenf(p);
	printf("n=%d", evenN);
	return 0;
}

int sumf(int *a) {
	int s = 0;
	for (int i = 0; i < 10; i++) {
		s += *a;
		a++;
	};
	return s;
};

int evenf(int *a) {
	int n = 0;
	for (int i = 0; i < 10; i++) {
		if (*a % 2 == 0) {
			n++;
		};
		a++;
	};
	return n;
}