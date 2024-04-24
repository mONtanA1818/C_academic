#include <stdio.h>

int main() {
	char a[10];
	printf ("please input what your need to encoed\n");
	scanf("%s", &a);
//	printf("%d", a[0]);
	for (char *p = a; *p != '\0' ; p++) {
		if (*p >= 97 && *p <= 100 || *p >= 65 && *p <= 68) {
			*p += 22;
		} else if (*p >= 69 && *p <= 86 || *p >= 101 && *p <= 118) {
			*p -= 4;
		}
	}
	printf ("%s", a);
	return 0;
}