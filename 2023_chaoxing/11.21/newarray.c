#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void array_insert(int* a, int number);
int main(int argc,char const *argv[]){
    int a[100]={1,2,3,4};
    int num;
    printf("please input a number\n");
    scanf("%d",&num);
    array_insert(a,num);
    int i;
    for ( i = 0; i < 5; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}

void array_insert(int* a, int number){
    a[4]=number;
}