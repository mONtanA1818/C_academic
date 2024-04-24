#include <stdio.h>
void mystrcat(char *a, char *b, char *c);

int main() {
	char a[100], b[100], c[1000];
	printf("please input a:");
	gets(a);
	printf("please input b:");
	gets(b);
	printf ("New string is:");
	mystrcat(a, b, c);
	printf("%s", c);

	return 0;
}



void mystrcat(char *a, char *b, char *c) {
	int i, j;
	for (i = 0; a[i] != '\0'; i++) {
		c[i] = a[i];
	};
	for (j = 0; b[j] != '\0'; j++) {
		c[i + j] = b[j];
	};
	c[i + j] = '\0';
};