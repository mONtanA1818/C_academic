#include <stdio.h>

int main() {
	double a = 1, b = 2;
	double sum = 0;
	for (int i = 0; i <= 19; i++) {
		double c;
		printf("%f/%f\n", b, a);
		c = (double)b / a;
		sum += c;
		int temp = a;
		a = b;
		b = temp + a;
	}
	printf("%.2f", sum);
	return 0;
}