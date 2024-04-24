#include <stdio.h>
void inPut(int *p);
void porcess(int *p);
void outPut(int *p);

int main() {
	int a[10];
	int *p = a;
	inPut(p);
	porcess(p);
	outPut(p);
	return 0;
};

void inPut(int *p) {

	for (int i = 0; i < 10; i++) {
		printf("[%d]= ", i + 1);
		scanf("%d", &p[i]);
	};

}

void outPut(int *p) {


	for (int i = 0; i < 10; i++) {
		printf("%d ", p[i]);
//		scanf("%d", &p[i]);
	};

}

void porcess(int *p) {
	int minid = 0;

	for (int i = 1; i < 10; i++) {
		if (p[minid] > p[i]) {
			minid = i;
		};
	};
	int temp = p[minid];
	p[minid] = p[0];
	p[0] = temp;
	int maxid = 0;

	for (int i = 1; i < 10; i++) {
		if (p[maxid] < p[i]) {
			maxid = i;
		};
	};
	temp = p[maxid];
	p[maxid] = p[9];
	p[9] = temp;
}
