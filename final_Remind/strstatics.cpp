#include <stdio.h>
//#include <string.h>

int main() {
	int letter = 0, space = 0, number = 0, other = 0;
	char str[50];
	gets(str);
//	printf("\n%s", str);
	char *p;
	for (p = str; *p != '\0'; p++) {
		if (*p >= 48 && *p <= 57) {
			number++;
		} else if (*p >= 65 && *p <= 90 || *p >= 97 && *p <= 122) {
			letter++;
		} else if (*p == 32) {
			space++;
		} else {
			other++;
		};
	};
	printf("number=%d,letter=%d,space=%d,other=%d", number, letter, space, other);
	return 0;
}