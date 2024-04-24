#include <stdio.h>
int prime(int a);

int main() {
	printf("plese input a number\n");
	int num;
	scanf("%d", &num);
	int res = prime(num);
	if (res) {
		printf("This is prime number");
	} else {
		printf("This is no prime number");
	};
	return 0;
}

int prime(int a) {
	int t = 1;
	for (int i = a - 1; i > 1 ; i--) {
		if (a % i == 0) {
			t = 0;
			break;
		};
	};
	return t;
}