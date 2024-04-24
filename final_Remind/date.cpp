#include <stdio.h>
int sumf(int y, int m, int d);
int validDate(int y, int m, int d);
int leap(int y);

int main() {
	while (1) {

		int y, m, d;
		printf("yy,mm,dd\n");
		scanf("%d,%d,%d", &y, &m, &d);
		if (validDate(y, m, d)) {
			printf("sum day=%d\n", sumf(y, m, d));
		} else {
			printf("data error\n");
		};

	}
	return 0;
};

int sumf(int y, int m, int d) {

	int sum = 0;
	int a[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	for (int i = 0; m >= 2 && i < m - 1; i++) {
		sum += a[i];
	}
	if (m > 2 && leap(y)) {
		sum++;
	};
	sum += d;
	return sum;
}


int validDate(int y, int m, int d) {
	int t = 1;
	int daysInmonth;
	switch (m) {
		case 9:
		case 11:
		case 6:
		case 4:
			daysInmonth = 30;
			break;
		case 2:
			daysInmonth = (leap(y)) ? 29 : 28;
			break;
		default:
			daysInmonth = 31;
			break;
	};
	return (d <= daysInmonth);
}


int leap(int y) {
	int t;
	if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) {
		t = 1;
	} else {
		t = 0;
	}
	return t;
}