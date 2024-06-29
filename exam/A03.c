#include <stdio.h>
#include <stdlib.h>

// 获取数组中的最大值
int getMax(int *arr, int size) {
    int max = *arr;
    for (int i = 1; i < size; i++) {
        if (*(arr + i) > max) {
            max = *(arr + i);
        }
    }
    return max;
}

// 获取数组中的最小值
int getMin(int *arr, int size) {
    int min = *arr;
    for (int i = 1; i < size; i++) {
        if (*(arr + i) < min) {
            min = *(arr + i);
        }
    }
    return min;
}

int main() {
    int N;
    printf("请输入N的值（3、5或7）：");
    scanf("%d", &N);

    int *arr = (int *)malloc(N * N * sizeof(int));

    // 初始化数组元素
    int count = 1;
    for (int i = 0; i < N * N; i++) {
        *(arr + i) = count++;
    }

    // 打印初始化后的数组
    printf("初始化的数组：\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%4d ", *(arr + i * N + j));
        }
        printf("\n");
    }

    // 找到最大值和前四个最小值的位置
    int max = getMax(arr, N * N);
    int min1 = getMin(arr, N * N);
    int min2 = max;
    int min3 = max;
    int min4 = max;

    for (int i = 0; i < N * N; i++) {
        int current = *(arr + i);
        if (current < min1) {
            min4 = min3;
            min3 = min2;
            min2 = min1;
            min1 = current;
        } else if (current < min2 && current != min1) {
            min4 = min3;
            min3 = min2;
            min2 = current;
        } else if (current < min3 && current != min1 && current != min2) {
            min4 = min3;
            min3 = current;
        } else if (current < min4 && current != min1 && current != min2 && current != min3) {
            min4 = current;
        }
    }

    // 将最大值放在数组中心，四个最小值放在四个角
    *(arr + (N / 2) * N + N / 2) = max;
    *(arr) = min1;
    *(arr + N - 1) = min2;
    *(arr + N * (N - 1)) = min3;
    *(arr + N * (N - 1) + N - 1) = min4;

    // 输出数组
    printf("调整后的数组：\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%4d ", *(arr + i * N + j));
        }
        printf("\n");
    }

    free(arr);

    return 0;
}
