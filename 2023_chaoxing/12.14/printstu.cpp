#include <stdio.h>
# define Len 5
void print(struct stuInfo *a);

struct stuInfo {
	int num;
	char name[20];
	int score[3];
};

int main() {
	struct stuInfo stuStack[Len] = {};
	struct stuInfo *p = stuStack;
	printf("Please input the studentInfo: like 23001 liudehua 93 94 95\n");
	for (int i = 0; i < Len; i++) {
		scanf("%d %s %d %d %d", &p[i].num, &p[i].name, &p[i].score[0], &p[i].score[1], &p[i].score[2]);
	}
	print(p);
}

void print(struct stuInfo *a) {
	for (int i = 0; i < Len; i++) {
		printf("num:%d, name:%s, score: %d %d %d\n", a[i].num, a[i].name, a[i].score[0], a[i].score[1], a[i].score[2]);
	}

}