#include <stdio.h>
#include <string.h>
#define N 10
void strsort(char *a) ;

int main() {
	char a[N];
	printf ("input string");
	gets(a);
	strsort(a);
	printf("new str: %s", a);
	return 0;
};

void strsort(char *a) {
	for (int i = N - 1; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (a[j] > a[j + 1]) {
				char temp = a[j + 1];
				a[j + 1] = a[j];
				a[j] = temp;
			};
		};
	};
}