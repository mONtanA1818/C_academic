#include<stdio.h>
int min(int a,int b);
int max(int a,int b);
int main(int argc,char const *argv[])
{
    int m,n,sum=0,i;
    printf("please input m and n value like 34 78\n");
    scanf("%d %d",&m,&n);
    int q=min(m,n);
    int p=max(m,n);
    i=q;
    do
    {
        if (i%2==0 && i!=1)
        {
            sum+=i;
        }
        i++;
    } while (i<=p);
    printf("The even sum of m to n =%d",sum);
    return 0;
}

int max(int a,int b)
{
    return a>b?a:b;
}

int min(int a,int b)
{
    return a>b?b:a;
}