#include <stdio.h>

int main() {
	long fact = 1, sum = 0;
	for (int i = 1; i <= 20; i++ ) {
		fact = fact * i;
		sum += fact;
	}
	printf("%ld", sum);
	return 0;
}