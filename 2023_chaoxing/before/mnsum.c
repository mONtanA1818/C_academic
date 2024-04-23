#include <stdio.h>
int max(int a, int b);
int min(int a, int b);
int main(int argc,char const *argv)
{
    int m,n,i,sum=0;
    printf("please input the m and n value like 4 7\n");
    scanf("%d %d",&m,&n);
    int q=max(m,n);
    int p=min(m,n);
    for ( i = p; i <= q; i++)
    {
        sum+=i;
    }
    printf("The value of sum of m to n=%d",sum);
    
    return 0;
}

int max(int a, int b)
{
    return a>b?a:b;
}

int min(int a, int b)
{
    return a>b?b:a;
}