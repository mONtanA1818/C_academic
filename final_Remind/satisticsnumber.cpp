#include <stdio.h>

int main() {
	char a[1000];
	gets(a);
	int upl = 0,
	    dwl = 0,
	    num = 0,
	    space = 0, other = 0;
	for (char *p = a; *p != '\0'; p++) {
		if (*p >= 97 && *p <= 122) {
			dwl++;
		} else if (*p >= 65 && *p <= 90) {

			upl++;
		} else if (*p == 32) {
			space++;
		} else if (*p >= 48 && *p <= 57) {
			num++;
		} else {
			other++;
		};
	};
	printf("upperletter=[%d]\ndwonletter[%d]\nspace=[%d]\nnum=[%d]\nother=[%d]", upl, dwl, space, num, other);
	return 0;
}