#include<stdio.h>
#include <math.h>
int main (int argc,char const *argv[])
{
    float x,y,d1,d2;
    int height=0;
    printf("����������(x,y),�м��ÿո����,��(2,3),������ 2 3\n");
    scanf("%f %f",&x,&y);
    float ret;
    if (x>=0 && y>=0)
    {   
        d2=pow((2-y),2);
        d1=pow((2-x),2);
        ret=d1+d2;
        if (ret<=1)
        {
            height=10;
        }
        else
        {
            height=0;
        }
        
    }
    if (x>=0 && y<=0)
    {
        d1=pow((2-x),2);
        d2=pow((-2-y),2);
        ret=d1+d2;
        if (ret<=1)
        {
            height=10;
        }
        else
        {
            height=0;
        }
        
    }
    if (x<=0 && y>=0)
    {
        d1=pow((-2-x),2);
        d2=pow((2-y),2);
        ret=d1+d2;
        if (ret<=1)
        {
            height=10;
        }
        else
        {
            height=0;
        }
        
    }
    if (x<=0 && y<=0)
    {
        d1=pow((-2-x),2);
        d2=pow((-2-y),2);
        ret=d1+d2;
        if (ret<=1)
        {
            height=10;
        }
        else
        {
            height=0;
        }
        
    }
    printf("%d",height);
    return 0;
}