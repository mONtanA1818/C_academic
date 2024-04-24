#include <stdio.h>
int sumdays(int y, int m, int d);
int leap(int year);
int validDate(int y, int m, int d);

int main() {
	while (1) {

		int y, m, d;
		printf("input yy,mm,dd\n");
		scanf("%d,%d,%d", &y, & m, & d);
//		y = 2002;
//		m = 2;
//		d = 29;
//	printf("%d", sumdays(y, m, d));
		if (validDate(y, m, d)) {
			printf("sum days = %d\n", sumdays(y, m, d));
		} else {
			printf("data error\n");
		}
	};
	return 0;
}


int sumdays(int y, int m, int d) {
	int sum = 0;
	int a[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 12};
	for (int i = 0; i < m - 1 && m >= 2; i++) {
		sum += a[i];
	};
	if (leap(y) && m > 2) {
		sum++;
	};
	sum += d;
	return sum;
}

int validDate(int y, int m, int d) {
	int daysInMonth;
	if (y < 1 || m < 1 || m > 12) {
		return 0;
	} else {
		switch (m) {
			case 2:
				daysInMonth = (leap(y)) ? 29 : 28;
				break;
			case 11:
			case 9:
			case 6:
			case 4:
				daysInMonth = 30;
				break;
			default:
				daysInMonth = 31;
				break;
		};
	};
	return (d <= daysInMonth);
};

int leap(int year) {
	int f;
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
		f = 1;
	} else {
		f = 0;
	};
	return f;
}