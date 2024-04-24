#include <stdio.h>
void ndest(char a[], char b[], int n);

int main() {
	char a[1000], b[1000];
	printf("please input the string\n");
	gets(a);
	printf("please input the n");
	int n;
	scanf("%d", &n);
	ndest(a, b, n);
	printf("New string is %s", b);
	return 0;
}


void ndest(char a[], char b[], int n) {
	char *p, *q;
	for (p = &a[n - 1], q = b; *p != '\0'; b++, p++) {
		*b = *p;
	};
	*b = '\0';
}