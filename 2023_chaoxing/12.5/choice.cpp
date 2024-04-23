#include <stdio.h>
void SelectSort(int *a, int len);

int main()
{	int a[10] = {5, 2, 1, 8, 3, 12, 9, 6, 7, 4};
	SelectSort(a, 10);
	for (int i = 0; i < 10; i++)
	{	printf("%d ", a[i]);
	}

};

void SelectSort(int *a, int len)
{	int minid, i, min, k;
	for ( i = 0; i < len - 1; i++)
	{	minid = i;
		for ( k = i; k < len; k++)
		{	if (a[minid] > a[k])
			{	minid = k;
			}

		}
		if (i != minid)
		{	int temp = a[i];
			a[i] = a[minid];
			a[minid] = temp;
		}

	}

}
