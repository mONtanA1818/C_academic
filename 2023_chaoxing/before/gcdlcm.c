#include <stdio.h>
int max(int a,int b);
int min(int a,int b);
int main(int argc,char const *argv[])
{
    printf("please input value of m and n for gcd\n");
    int m,n,p,q,i=-1;
    scanf("%d %d",&m,&n);
    int gcd=0;
    //m=max(m,n);
    p=min(m,n);
    for ( i = (p-1); i >1; i--)
    {
        if (m%i==0 && n%i==0)
        {
            gcd=i;
            break;
        }
    }
    if (i)
    {
        printf("The max of greast common divisor value=%d\n",gcd);
    }
    printf("please input value of m and n for lcm\n");
    scanf("%d %d",&m,&n);
    int lcm=0;
    i=max(m,n);
    while (1)
    {
        if (i%m==0 && i%n==0)
        {
            lcm=i;
            break;
        }
        i++;
    }
    printf("The least common multipe value=%d\n",lcm);
    return 0;
}
int max(int a,int b)
{
    a>b?a:b;
}
int min(int a,int b)
{
    a>b?b:a;
}