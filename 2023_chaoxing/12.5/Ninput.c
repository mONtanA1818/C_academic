#include <stdio.h>
void CopyStr(char *dest,char *src,int n);
int main(){
    char a[100]={"Today is a good day"};
    printf("str1=%s\n",a);
    char b[100]={0};
    int n;
    printf("please in put n");
    scanf("%d",&n);
    CopyStr(b,a,n);
    printf("str2=%s",b);
    return 0;
}

void CopyStr(char *dest,char *src,int n){
    int i;
    for ( i = n-1; src[i] !='\0'; i++)
    {
        dest[i-n+1]=src[i];
    }
    dest[i-n+1] = '\0';
}