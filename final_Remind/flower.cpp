#include <stdio.h>

int main() {

	for (int i = 100; i <= 999; i++) {
//		int i = 153;
		int a = i % 10;
		int b = (i / 10) % 10;
		int c = i / 100;
		int sum = a * a * a + b * b * b + c * c * c;
		if (i == sum ) {
			printf("%d\n", i);
		};
	}
	return 0;
}