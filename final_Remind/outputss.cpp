#include <stdio.h>

int main() {
	for (int i = 3; i >= 0; i--) {
		for (int k = 0; k < i; k++) {
			printf(" ");
		}
		for (int j = 1; j <= 7 - i * 2; j++) {
			printf("*");
		};
		printf("\n");
	};
	for (int i = 1; i <= 3; i++) {
		for (int k = 1; k <= i; k++) {
			printf(" ");
		}
		for (int j = 1; j <= 7 - i * 2; j++) {
			printf("*");
		};
		printf("\n");
	};
	return 0;
}