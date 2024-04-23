#include <stdio.h>
void printarr(int *a,int len);
void SelectSort(int *arr, int len);
int main(void){
    int list[4]={2,9,4,1};

    printarr(list,4);
    SelectSort(list,4);
}

void SelectSort(int *arr, int len)
{
    int min;
    int minid;
    for (int i = 0; i < len-1; i++)
    {
        minid=i;
        for (int j = i; j < len; j++)
        {
            if (arr[minid]>arr[j])
            {
                minid=j;
            }
        }
        // 如果当前minid不在应该有的位置上的
        // 那么就将他们进行交换
        
        if (minid!=i)
        {
            int temp=arr[i];
            arr[i]=arr[minid];
            arr[minid]=temp;
        }
    }
}

void printarr(int *a,int len){
    for (int i = 0; i < len; i++)
    {
        printf("%d ",a[i]);
    }
}