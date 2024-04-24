#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 40

// 函数声明
float calculateAverage(int arr[], int n);
int findMaxIndex(int arr[], int n);
int findMinIndex(int arr[], int n);
void bubbleSort(int arr[], int n);
void sequentialSearch(int arr[], int n, int key);
void binarySearch(int arr[], int n, int key);
void generateRandomNumbers(int arr[], int n);
void swap(int *a, int *b);
void reverseArray(int arr[], int n);
void displayArray(int arr[], int n);
void outPutSearch(int arr[], int n, int key);

int main()
{	int numbers[N];
	int n, key;

	// 输入实际处理元素的个数n
	printf("请输入要处理的元素个数（不超过 %d）: ", N);
	scanf("%d", &n);

	// 生成随机数并显示
	generateRandomNumbers(numbers, n);
	printf("生成的随机数为：\n");
	displayArray(numbers, n);

	// 求出所有高于平均数的数据
	float average = calculateAverage(numbers, n);
	printf("平均数为：%f\n", average);
	printf("高于平均数的数据为：\n");
	for (int i = 0; i < n; i++)
	{	if (numbers[i] > average)
		{	printf("%d ", numbers[i]);
		}
	}
	printf("\n");

	// 交换最大数和最小数的位置
	int maxIndex = findMaxIndex(numbers, n);
	int minIndex = findMinIndex(numbers, n);
	swap(&numbers[maxIndex], &numbers[minIndex]);
	printf("交换最大数和最小数的位置后的数组为：\n");
	displayArray(numbers, n);

	// 对数组进行逆置
	reverseArray(numbers, n);
	printf("逆置后的数组为：\n");
	displayArray(numbers, n);

	// 对数组进行排序（冒泡排序）
	bubbleSort(numbers, n);
	printf("排序后的数组为：\n");
	displayArray(numbers, n);

	// 算法效率分析
	printf("请输入要查找的数：");
	scanf("%d", &key);
	outPutSearch(numbers, n, key);

	// 对排序前数据采用顺序查找
	printf("对排序前数据采用顺序查找：\n");
	sequentialSearch(numbers, n, key);

	// 对排序后数据采用二分查找
	printf("对排序后数据采用二分查找：\n");
	binarySearch(numbers, n, key);

	return 0;
}

// 计算平均数
float calculateAverage(int arr[], int n)
{	int sum = 0;
	for (int i = 0; i < n; i++)
	{	sum += arr[i];
	}
	return (float)sum / n;
}

// 寻找最大数的下标
int findMaxIndex(int arr[], int n)
{	int maxIndex = 0;
	for (int i = 1; i < n; i++)
	{	if (arr[i] > arr[maxIndex])
		{	maxIndex = i;
		}
	}
	return maxIndex;
}

// 寻找最小数的下标
int findMinIndex(int arr[], int n)
{	int minIndex = 0;
	for (int i = 1; i < n; i++)
	{	if (arr[i] < arr[minIndex])
		{	minIndex = i;
		}
	}
	return minIndex;
}

// 冒泡排序
void bubbleSort(int arr[], int n)
{	for (int i = 0; i < n - 1; i++)
	{	for (int j = 0; j < n - i - 1; j++)
		{	if (arr[j] > arr[j + 1])
			{	swap(&arr[j], &arr[j + 1]);
			}
		}
	}
}

// 顺序查找
void sequentialSearch(int arr[], int n, int key)
{	int comparisons = 0;
	for (int i = 0; i < n; i++)
	{	comparisons++;
		if (arr[i] == key)
		{	printf("找到 %d，下标为 %d，比较次数为 %d\n", key, i, comparisons);
			return;
		}
	}
	printf("未找到 %d，比较次数为 %d\n", key, comparisons);
}

// 二分查找
void binarySearch(int arr[], int n, int key)
{	int comparisons = 0;
	int low = 0, high = n - 1;
	while (low <= high)
	{	comparisons++;
		int mid = (low + high) / 2;
		if (arr[mid] == key)
		{	printf("找到 %d，下标为 %d，比较次数为 %d\n", key, mid, comparisons);
			return;
		}
		else if (arr[mid] < key)
		{	low = mid + 1;
		}
		else
		{	high = mid - 1;
		}
	}
	printf("未找到 %d，比较次数为 %d\n", key, comparisons);
}


void outPutSearch(int arr[], int n, int key)
{	int comparisons = 0;
	int low = 0, high = n - 1;
	while (low <= high)
	{	//comparisons++;
		int mid = (low + high) / 2;
		if (arr[mid] == key)
		{	printf("找到 %d，下标为 %d\n", key, mid);
			return;
		}
		else if (arr[mid] < key)
		{	low = mid + 1;
		}
		else
		{	high = mid - 1;
		}
	}
	printf("未找到%d\n", key);
}


// 生成随机数
void generateRandomNumbers(int arr[], int n)
{	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{	arr[i] = rand() % 100;
	}
}

// 交换值
void swap(int *a, int *b)
{	int temp = *a;
	*a = *b;
	*b = temp;
}

// 逆置数组
void reverseArray(int arr[], int n)
{	for (int i = 0; i < n / 2; i++)
	{	swap(&arr[i], &arr[n - i - 1]);
	}
}

// 显示数组
void displayArray(int arr[], int n)
{	for (int i = 0; i < n; i++)
	{	printf("%d ", arr[i]);
	}
	printf("\n");
}
