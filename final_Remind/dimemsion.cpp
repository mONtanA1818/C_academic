#include <stdio.h>

int main() {
	int a[5][5] = {
		{22, 23, 24, 28, 27},
		{12, 19, 13, 15, 20},
		{1, 6, 99, 32, 31},
		{67, 74, 64, 61, 64},
		{87, 88, 89, 91, 922}
	};
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			sum += a[i][j];
		};
	};
	printf("平均值为%d\n", sum / 25);
	int maxidOfx = 0, maxidOfy = 0;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (a[maxidOfy][maxidOfx] < a[i][j]) {
				maxidOfy = i;
				maxidOfx = j;
			}
		};
	};
	printf("max id=[%d][%d]\n", maxidOfy + 1, maxidOfx + 1);
	///


	int minidOfx = 0, minidOfy = 0;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (a[minidOfy][minidOfx] > a[i][j]) {
				minidOfy = i;
				minidOfx = j;
			}
		};
	};
	printf("min id=[%d][%d]\n", minidOfy + 1, minidOfx + 1);
///
	return 0;
}

