#include <stdio.h>
int max (float a[]);
int min (float a[]);

int main() {
	float a[10] = {12, 31, 432, 11, 13, 64, 1, 96, 666, 30};
	for (int i = 0; i < 10; i++) {
		printf("a[%d]=", i + 1);
		scanf("%f", &a[i]);
	};
	printf ("the arrray is[");
	for (int i = 0; i < 10; i++ ) {
		printf("%.2f ", a[i]);
	};
	printf("]\n");
	printf ("maxid is %d\n", max(a) + 1);
	printf ("minid is %d\n", min(a) + 1);
	return 0;
};


int max (float a[]) {
	int maxid = 0;
	for (int i = 1; i < 9; i++) {
		if (a[maxid] < a[i]) {
			maxid = i;
		};
	};
	return maxid;
};

int min (float a[]) {
	int minid = 0;
	for (int i = 1; i < 9; i++) {
		if (a[minid] > a[i]) {
			minid = i;
		};
	};
	return minid;
};