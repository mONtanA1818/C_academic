#include <stdio.h>
int days(int year, int month, int day);

int main() {
	struct date {
		int year;
		int month;
		int day;
	};
	struct date day1;
	printf("Please input the date like 2023 5 23\n");
	scanf("%d %d %d", &day1.year, &day1.month, &day1.day);
	days(day1.year, day1.month, day1.day);
	return 0;
}

int days(int year, int month, int day) {
	int num = 0;
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
		int a[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
		if (month >= 2) {
			for (int i = 0; i < month - 1; i++) {
				num += a[i];
			}
			num += day;
		} else {
			num = day;
		}

	} else {
		int a[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
		if (month >= 2) {
			for (int i = 0; i < month - 1; i++) {
				num += a[i];
			}
			num += day;
		} else {
			num = day;
		}
	}
	printf("date in year is %d days", num);
	return 0;
}