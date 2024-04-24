#include <stdio.h>

int main() {
	int fact = 1;
	for (int i = 2; i <= 10 ; i++) {
		fact = fact * i;
	}
	printf("%d", fact);
	return 0 ;
}