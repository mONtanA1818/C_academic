#include <math.h>
#include <stdio.h>
int main (int argc, char const *argv[])
{
    printf("please input the value of n\n");
    int i,j,n,sum=0,q;
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        q=0;
        for ( j = 0; j < i; j++)
        {
            q+=2*pow(10,j);
        }
        sum+=q;
    }
    printf("%d",sum);
    return 0;
}