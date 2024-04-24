#include <stdio.h>

int main () {
	printf ("please input your grade\n");
	char grade;
	int score;
	scanf("%d", &score);
	if (score <= 100 && score >= 0) {
		switch (score / 10) {
			case 10:
			case 9:
				grade = 'A';
				break;
			case 8:
				grade = 'B';
				break;
			case 7:
				grade = 'C';
				break;
			case 6:
				grade = 'D';
				break;
			case 5:
			case 4:
			case 3:
			case 2:
			case 1:
			case 0:
				grade = 'E';
				break;
		}
	} else {
		printf ("您输入的成绩不合法");
	}
	printf("%c", grade);
	return 0;
}