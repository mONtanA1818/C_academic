#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int main(int argc,char const *argv[])
{
    char arr[100]={0};
    char arr1[100]={0};
    int i=0;
    printf("请输入要加密的字符\n");
    gets(arr);
    i=strlen(arr);
    int j;
    for (j = 0; j < i; j++)
    {
        if (65<=arr[j] && arr[j]<=68)
        {
            arr1[j]=arr[j]+22;
            continue;
        }
        if (97<=arr[j] && arr[j]<=100)
        {
            arr1[j]=arr[j]+22;
            continue;
        }
        if (101<=arr[j] && arr[j]<=122)
        {
            arr1[j]=arr[j]-4;
            continue;
        }
        if (69<=arr[j]  && arr[j]<=90)
        {
            arr1[j]=arr[j]-4;
            continue;
        }
    }
    for ( j = 0; j < i; j++)
    {
        putchar(arr1[j]);
    }
    printf("\n");
    return 0; 
}
