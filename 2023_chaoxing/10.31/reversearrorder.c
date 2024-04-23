// #include <stdlib.h>
#include <stdio.h>
void reversearr(int *p,int size);
int main(int argc,char const *argv[])
{

    int i;
    int a[5]={0};
    for ( i = 0; i < 5; i++)
    {
        printf("Input the value of [%d] in array\n",i);
        scanf("%d",&a[i]);
    }
    reversearr(a,5);
    for ( i = 0; i < 5; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}

void reversearr(int *p,int size)
{
    int start=0,end=size-1;
    while (start<end)
    {
        int temp;
        temp=p[end];
        p[end]=p[start];
        p[start]=temp;
        start++;
        end--;
    }
    
} 
