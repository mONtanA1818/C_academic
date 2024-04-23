#include <stdio.h>
int main(int argc,char const *argv[])
{
    int number=1,i;
    int multiple=1;
    for ( i = 10; i >=1 ; i--)
    {   
        multiple=multiple*i;
    }
    printf("%d",multiple);
}