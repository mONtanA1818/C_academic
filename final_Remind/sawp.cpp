#include <stdio.h>
void swap(int *a, int *b) ;

int main() {
	printf("input number:");
	int *a, *b, *c;
	int n1, n2, n3;
	scanf("%d %d %d", &n1, &n2, &n3);
	a = &n1;
	b = &n2;
	c = &n3;
	if (*a > *b)
		swap(a, b);
	if (*a > *c)
		swap(a, c);
	if (*b > *c) {
		swap(b, c);
	}
	printf("%d %d %d", *a, *b, *c);
	return 0;
}

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}