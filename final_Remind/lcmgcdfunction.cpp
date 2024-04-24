#include <stdio.h>
int gcd(int u, int v);
int lcm(int a, int b, int h);

int main() {
	while (1) {
		int a, b;
		printf("Please input the a and b\n");
		scanf("%d %d", &a, &b);
		printf ("gcd=%d\n", gcd(a, b));
		printf ("lcm=%d\n", lcm(a, b, gcd(a, b)));
	};
	return 0;
};

int gcd(int u, int v) {
	if (u < v) {
		int temp = v;
		v = u;
		u = temp;
	};
	while ((u % v) != 0) {
		int t = u % v;
		u = v;
		v = t;
	};
	int h = v;
	return h;
};

int lcm(int a, int b, int h) {

	if (a > b) {
		int temp = b;
		b = a;
		a = temp;
	};
	a = a / h;
	b = b / h;
	int c = a * b * h;
	return c;
};