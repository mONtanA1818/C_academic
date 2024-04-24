#include <stdio.h>

int main () {
	int a = 2, b = 3;
	float x = 3.5, y = 2.5;
	float value = (float)(a + b) / 2 + (int)x % (int)y;
	printf("%.2f", value);
	return 0;
}