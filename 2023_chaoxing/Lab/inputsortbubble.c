#include <stdio.h>

void main(){
    int a[10]={0};
    int i,j;
    for (i = 0; i < 10; i++)
    {
        printf("input the [%d] in array",i);
        scanf("%d",&a[i]);
    }
    int len=sizeof(a)/sizeof(a[0]);
    for ( i = 0; i < len-1; i++)
    {
        for ( j = 0; j < len-1; j++)
        {
            if (a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
            
        }
        
    }
    for ( i = 0; i < len; i++)
    {
        printf("%d\t",a[i]);
    }
    
}