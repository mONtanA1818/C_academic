#include <stdio.h>

int main() {
	int suma = 0, sumb = 0;
	float sumc = 0;
	for (int i = 1; i <= 100; i++) {
		suma += i;
	};
	for (int i = 1; i <= 50; i++ ) {
		sumb += i * i;
	};
	for (int i = 1; i <= 10; i++) {
		sumc += (float)1 / i;
	};
	printf("sum = %.3f", suma + sumb + sumc);

}