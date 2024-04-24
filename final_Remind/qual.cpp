#include <stdio.h>
#include <math.h>
int fun1(float a, float b, float c);
int fun2(float a, float b, float c);
int fun3(float a, float b);

int main() {
	printf("please input a,b,c\n");
	float a, b, c;
	scanf("%f,%f,%f", &a, &b, &c);
	printf("equal is %5.2f*x*x+%5.2f*x+%5.2f*c\n", a, b, c);
	float d = b * b - 4 * a * c;
	if (d > 0) {
		fun1(a, b, c);
	} else if (d < 0) {
		fun2(a, b, c);
	} else if (d == 0) {
		fun3(a, b);
	};
	return 0;
}

int fun1(float a, float b, float c) {
	float x1, x2;
	x1 = (-b  + sqrt(b * b - 4 * a * c)) / (2 * a);
	x2 = (-b  - sqrt(b * b - 4 * a * c)) / (2 * a);
	printf("x1=%.2f  x2=%.2f", x1, x2);
	return 0;
};

int fun2(float a, float b, float c) {
	float p, q;
	p = -b / (2 * a);
	q = sqrt(4 * a * c - b * b) / (2 * a);
	printf("x1=%.2f+%.2f i  x2=%.2f-%.2f i", p, q, p, q);
	return 0;
};

int fun3(float a, float b) {
	float x1, x2;
	x1 = x2 = -b / (2 * a);
	printf("x1=x2=%.2f", x1, x2);
	return 0;
};