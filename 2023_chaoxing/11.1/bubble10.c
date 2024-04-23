#include <stdio.h>
int main()
{
    int i,j;
    int amount[10]={0};
    for ( i = 0; i < 10; i++)
    {
        printf("Input the value of the [%d] in array\n",i);
        scanf("%d",&amount[i]);
    }
    int len =sizeof(amount)/sizeof(amount[0]);
    for ( i = 0; i < len-1; i++)
    {
        for ( j = 0; j < len-1; j++)
        {
            if (amount[j]>amount[j+1])
            {
                int temp;
                temp=amount[j];
                amount[j]=amount[j+1];
                amount[j+1]=temp;
            }
            
        }
        
    }
    for ( i = 0; i < len; i++)
    {
        printf("%d ",amount[i]);
    }
    
}