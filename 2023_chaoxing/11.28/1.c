#include <stdio.h>

// 函数声明
void shiftArray(int *arr, int n, int m);

int main() {
    int n, m;

    // 输入数组大小 n
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // 创建数组并输入元素
    int arr[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 输入向后移动的位数 m
    printf("Enter the number of positions to shift: ");
    scanf("%d", &m);

    // 调用函数进行数组元素的移动
    shiftArray(arr, n, m);

    // 输出调整后的数组
    printf("Array after shifting:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

// 实现数组元素的向后移动
void shiftArray(int *arr, int n, int m) {
    int temp[m];

    // 将数组的后 m 个元素保存在临时数组中
    for (int i = n - m, j = 0; i < n; i++, j++) {
        temp[j] = *(arr + i);
    }

    // 将数组的前 n-m 个元素向后移动 m 个位置
    for (int i = n - 1; i >= m; i--) {
        *(arr + i) = *(arr + i - m);
    }

    // 将临时数组中的元素放到数组的前 m 个位置
    for (int i = 0; i < m; i++) {
        *(arr + i) = temp[i];
    }
}
