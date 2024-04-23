#include <stdio.h>
#include <math.h>
int main(int argc,char const *argv[])
{
    int i,j;
    long long int sum=0,tempmutiple=1;
    for ( i = 1; i <= 20; i++)
    {
        tempmutiple*=i;
        sum+=tempmutiple;
    }
    printf("%lld",sum);
    return 0;
}