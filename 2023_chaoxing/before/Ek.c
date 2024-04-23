#include <stdio.h>
#include <math.h>
int main(int argc,char const *argv[])
{
    int i,sum1=0,sum2=0;
    float sum3;
    for ( i = 0; i <=100 ; i++)
    {
        sum1+=i;
    }
    printf("sum1=%d\n",sum1);
    for ( i = 1; i <= 50; i++)
    {
        sum2=sum2+pow(i,2);
    }
    printf("sum2=%d\n",sum2);
    float cnt=1;
    while (cnt<=10)
    {
        sum3=sum3+1/cnt;
        cnt++;
    }
    printf("sum3=%f\n",sum3);
    printf("sum1+sum2+sum3=%f",sum1+sum2+sum3);
}