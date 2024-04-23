#include <stdio.h>
int main(int agrc,char const *argv[])
{
    printf("please input the value of the number\n");
    int num,i,t=0;
    scanf("%d",&num);
    for ( i = 2; i < num; i++)
    {
        if (num%i==0)
        {
            t=1;
            break;
        }
        
    }
    if (t)
    {
        printf("The number you entered is a prime number");
    }else
    {
        printf("THe number you entered is not a prime number");
    }
    return 0;
    
}