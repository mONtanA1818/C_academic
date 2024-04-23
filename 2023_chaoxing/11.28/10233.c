#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void process(int *a, int n, int m);
int main(void){
    int n,m;
    printf("请输入n的值:");
    scanf("%d",&n);
    printf("请输入m的值");
    scanf("%d",&m);
    int *arr=(int*)malloc(sizeof(int)*n);
    // n=5,m=2;
    // int arr[5]={1,2,3,4,5};
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]=",i);
        scanf("%d",&*(arr+i));
    }
    process(arr,n,m);
    int i;
    for ( i = 0; i < n; i++)
    {
        printf("%d ",*(arr+i));
    }
    
}

void process(int *a, int n, int m)
{
    // p1是n-m的后置数组
    // p2是m的前置数组
    int i;
    int *p1=(int *)malloc(sizeof(int)*(n-m));
    int *p2=(int *)malloc(sizeof(int)*m);
    // 拷贝到p1
    memcpy(p1,a,(sizeof(int)*(n-m)));    
    // 拷贝到p2
    for (i=n-m; i < n; i++)
    {
        *(p2+i-n+m)=*(a+i);
    }
    memcpy(a,p2,sizeof(int)*(m));
    for (i = m; i < n; i++)
    {
        *(a+i)=*(p1+i-m);
    }
}