#include <stdio.h>
int leap(int year);
int days(int y, int m, int d);
int isValidDate(int y, int m, int d);

int main() {
	while (1) {
		int y, m, d;
		printf("\nplease input the yy/mm/dd\n");
		scanf("%d/%d/%d", &y, &m, &d);
		if (isValidDate(y, m, d)) {
			printf("sumday is%d", days(y, m, d));
		} else {
			printf("Invalid date");
		};
	};
	return 0;

};

int isValidDate(int y, int m, int d) {
	if (y < 0 || m < 1 || m > 12 || d < 1) {
		return 0;
	};
	int daysInmonth;
	switch (m) {
		case 2:
			daysInmonth = (leap(y)) ? 29 : 28;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			daysInmonth = 30;
			break;
		default:
			daysInmonth = 31;
			break;
	};
	return (d <= daysInmonth);
}


int days(int y, int m, int d) {
	int sum = 0;
	int a[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	for (int i = 0; m >= 2  && i <= m - 2; i++) {
		sum += a[i];
	};
	sum += d;
	if (m > 2 && leap(y)) {
		sum++;
	};
	return sum;
};

int leap(int year) {
	int flag;
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
		flag = 1;
	} else {
		flag = 0;
	};
	return flag;
};
