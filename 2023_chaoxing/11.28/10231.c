#include <stdio.h>
int even(int *a);
int sum(int *a);
int main(void){
    int arr[10]={0};
    int len=10;
    int i;
    for ( i = 0; i < len; i++)
    {
        printf("arr[%d]=",i);
        scanf("%d",&*(arr+i));
    }
    printf("总和=%d\n",sum(arr));
    float avgnum=(float)(sum(arr))/10;
    printf("平均值=%f",avgnum);
    printf("偶数个数=%d",even(arr));
}
int sum(int *a)
{
    int sumnum=0;
    int i;
    for ( i = 0; i < 10; i++)
    {
        sumnum+=*(a+i);
    }
    return sumnum;
}
int even(int *a)
{
    int i,cnt=0;
    for ( i = 0; i < 10; i++)
    {
        if (*(a+i)%2==0)
        {
            cnt++;
        }
    }
    return cnt;
}