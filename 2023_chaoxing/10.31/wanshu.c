#include <stdio.h>
int main(int agrc,char const *argv[])
{
    int i,num,sum,cnt;
    for ( num = 1; num <= 1000 ; num++)
    {
        int a[100]={0};
        sum=0;
        cnt=0;
        for ( i = 1; i < num; i++)
        {
            if (num%i==0)
            {
                a[cnt]=i;
                sum+=i;
                cnt++;
            }
            
        }
        if (sum==num)
        {
            printf("%d its factors are ",num);
            for (i = 0; i <= cnt-1; i++)
            {
                printf("%d ",a[i]);
            }
            printf("\n");    
        }
        
    }
    return 0;
}