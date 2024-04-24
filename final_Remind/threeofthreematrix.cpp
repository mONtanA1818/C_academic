#include <stdio.h>

int main() {
	int a[3][3], sum = 0;
	printf ("please input the first line\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			scanf("%d", &a[i][j]);
		};
	};
	printf("The original matrix is\n");
	for (int i = 0; i < 3; i++) {
		sum += a[i][i];
	};
	printf("sum is %d", sum);
	return 0;
}