#include <stdio.h>
int main(int argc,char const *argv[])
{
    float x,y;
    printf("please input x value\n");
    scanf("%f",&x);
    if (x<1)
    {
        y=x;
    }else if (x>=1 && x<10)
    {
        y=2*x-1;
    }else
    {
        y=3*x-11;
    }
    printf("%f",y);
    return 0;    
}