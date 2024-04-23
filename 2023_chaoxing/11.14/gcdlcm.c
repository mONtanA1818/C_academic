#include <stdio.h>
int max(int a,int b);
int min(int a,int b);
int gcd(int a,int b);
int lcm(int a,int b);
int main(int argc,char const *argv[])
{
    int m,n;
    printf("please input two number, like '45 13' for gcd\n");
    scanf("%d %d",&m,&n);
    gcd(m,n);


    printf("please input two number, like '45 13' for lcm\n");
    scanf("%d %d",&m,&n);
    lcm(m,n);
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

int gcd(int a,int b){
    int p,i;
    int gcd=0;
    //m=max(m,n);
    p=min(a,b);
    for ( i = (p-1); i >1; i--)
    {
        if (a%i==0 && b%i==0)
        {
            gcd=i;
            break;
        }
    }
    if (i)
    {
        printf("The max of greast common divisor value=%d\n",gcd);
    }
}

int lcm(int a,int b){
    int i,lcm=0;
    i=max(a,b);
    while (1)
    {
        if (i%a==0 && i%b==0)
        {
            lcm=i;
            break;
        }
        i++;
    }
    printf("The least common multipe value=%d\n",lcm);
    return 0;
}