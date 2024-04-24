#include <stdio.h>
int lengths(char *a);

int main() {
	char a[1000];
	printf("please input the string:\n");
	gets(a);
	char *p = a;
	printf("%d", lengths(p));
	return 0;
};

int lengths(char *a) {
	int len = 0;
	for (char *p = a; *p != '\0'; p++) {
		len++;
	};
	return len;
};