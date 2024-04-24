#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	printf("input N=");
	scanf("%d", &n);

	int *p = (int *)malloc(n * sizeof(int));

	// Your code logic goes here

	// Don't forget to free the allocated memory when you are done using it
	free(p);

	return 0;
}
