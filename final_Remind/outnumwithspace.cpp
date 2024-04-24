#include <stdio.h>
void outPut(char *a);

int main() {
	char a[5];
	printf("input=");
	gets(a);
	outPut(a);
	return 0;
};

void outPut(char *a) {
	for (char *p = a; *p != '\0'; p++) {
		printf("%c ", *p);
	};
}