#include <math.h>
#include <stdio.h>
int main(int agrc,char const *argv[])
{
    int i,a,b,c,sum;
    for ( i = 100; i <1000; i++)
    {
        a=i/100;
        b=(i-a*100)/10;
        c=i%10;
        sum=pow(a,3)+pow(b,3)+pow(c,3);
        sum=(int)sum;
        if (i==sum)
        {
            printf("%d**3 + %d**3 + %d**3 ==%d\n",a,b,c,sum);
        }
    }
    return 0;
}
