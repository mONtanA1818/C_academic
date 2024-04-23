#include<stdio.h>
int main(int argc,char const *argv[]){
    printf("please input 4 number\n");
    char a[5]={};
    gets(a);
    int i;
    for ( i = 0; i < 4; i++)
    {
        printf("%c",a[i]);
        printf("%c",' ');
    }
    return 0;
}