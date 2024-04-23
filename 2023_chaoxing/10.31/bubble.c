#include <stdio.h>
int main(int argc,char const *argv[])
{
    int i,j;
    float a[8]={0};
    for ( i = 0; i < 8; i++)
    {
        printf("Input the value of [%d] in array\n",i);
        scanf("%f",&a[i]);
    }
    int len=sizeof(a)/sizeof(a[0]);
    printf("\n");
    for ( i = 0; i < len-1; i++)
    {
        for ( j = 0; j < len-i-1; j++)
        {
            if (a[j]<a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }        
    }
    for ( i = 0; i < len; i++)
    {
        printf("%f ",a[i]);
    }
    printf("\n");
    return 0;
}