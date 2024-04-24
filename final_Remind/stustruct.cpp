#include <stdio.h>
#define N 5
void print(struct student stu[]) ;

struct student {
	int num;
	char name[20];
	int score[3];
} stu[N];

int main() {
	for (int i = 0; i < N; i++) {
		printf("student%d num: ", i + 1);
		scanf("%d", &stu[i].num);
		printf("student%d name: ", i + 1);
		scanf("%s", &stu[i].name);
		printf("student%d num: ", i + 1);
		for (int j = 0 ; j < 3; j++) {
			printf("socre %d=", j + 1);
			scanf("%d", &stu[i].score[j]);
		};
	};
	print(stu);
	return 0;
};


void print(struct student stu[]) {
	int i, j;
	printf("\nNo. name sorce1 sorce2 sorce3\n");
	for (i = 0; i < N; i++) {
		printf("%5d%10s", stu[i].num, stu[i].name);
		for (int j = 0; j < 3; j++) {
			printf("%9d", stu[i].score[j]);
		};
		printf("\n");
	};
}