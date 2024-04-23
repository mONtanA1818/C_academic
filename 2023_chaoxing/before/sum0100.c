#include <stdio.h>
int main(int argc,char const *argv[])
{
    int i;
    int sum=0;
    for ( i = 1; i <= 100; i++)
    {
        sum+=i;
    }
    printf("The value of the sum of zero to hundred=%d",sum);
    return 0;
}