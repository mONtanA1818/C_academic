#include <stdio.h>
void convert(int a[][3]);

int main() {
	int a[3][3];
	printf("input array\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			scanf("%d", &a[i][j]);
		};
	};


	printf("\n");
	convert(a);
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", a[i][j]);
		};
		printf("\n");
	};

	return 0;
}


void convert(int a[][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = i + 1; j < 3; j++) {
			int temp = a[i][j];
			a[i][j] = a[j][i];
			a[j][i] = temp;
		};
	};
};



