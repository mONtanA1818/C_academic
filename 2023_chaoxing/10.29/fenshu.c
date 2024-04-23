#include <stdio.h>
int main(int argc,char const *argv[])
{
    int a=1,b=2,i=0,c;
    float sum=0,q;
    while (i!=20)
    {
        c=a+b;
        q=(float)b/a;
        sum+=q;
        // printf("%d/%d+ ",b,a);
        a=b,b=c;
        i++;
    }
    printf("sum=%f\n",sum);
    
}