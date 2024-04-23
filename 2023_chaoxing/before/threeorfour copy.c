#include <stdio.h>
int main(int argc,char const *argv[])
{
    printf("please input the value of n=");
    int n,i,sum=0;
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        if (i%3==0 && i%4==0)
        {
            sum=sum+i;
        }
    }
    printf("The value of sum=%d",sum);
    return 0;
}