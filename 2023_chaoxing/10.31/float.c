#include <stdio.h>
int min(float b[],int len);
int max(float a[],int len);
int main(int argc,char const *argv[])
{
    int i;
    float a[10]={};
    for ( i = 0; i < 10; i++)
    {
        printf("Input the value of [%d] in array\n",i);
        scanf("%f",&a[i]);
    }
    // for ( i = 0; i < 10; i++)
    // {
    //     printf("%.4f\t",a[i]);
    // }
    
    printf("The max is on number [%d] in array\n",max(a,sizeof(a)/sizeof(a[0])));
    printf("The min is on number [%d] in array\n",min(a,sizeof(a)/sizeof(a[0])));
    
}

int max(float a[],int len)
{
    int maxid=0,i;
    for ( i = 1; i < len; i++)
    {
        if (a[maxid]<a[i])
        {
            maxid=i;
        }
    }
    return maxid;
}

int min(float b[],int len)
{
    int minid=0,i;
    for ( i = 1; i < len; i++)
    {
        if (b[minid]>b[i])
        {
            minid=i;
        }       
    }
    return minid;
}