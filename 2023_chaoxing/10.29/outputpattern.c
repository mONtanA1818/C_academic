#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,k;
    for ( i = 1; i <= 3; i++)
    {
        for ( j = 1; j <= 4-i ; j++)
        {
            printf(" ");
        }
        for ( k = 1; k <= 2*i-1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("*******\n");
    for ( i = 1; i <= 3; i++)
    {
        for ( j = 1; j <= i ; j++)
        {
            printf(" ");
        }
        for ( k = 5; k >= 2*i-1; k--)
        {
            printf("*");
        }
        printf("\n");
    }    
    return 0;
}