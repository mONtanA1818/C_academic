#include <stdio.h>
#define N 10
int max(int a[10]);

int main() {
	int a[N] = {19, 90, -65, 34, 8, 666, 13, 100, 20, 2};
	printf ("maxid = %d\n", max(a) + 1);
	printf ("max = %d", a[max(a)]);
	return 0;
}

int max(int a[10]) {

	int maxid = 0;
	for (int i = 1; i < N; i++) {
		if (a[maxid] < a[i]) {
			maxid = i;
		};
	};
	return maxid;
}