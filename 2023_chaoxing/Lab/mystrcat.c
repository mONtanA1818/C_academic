#include <stdio.h>
#include <string.h>
char *mystrcat(char* dest,char* src, int n)
{
    int len;
    if (strlen(src)>n)
    {
        len = n;
    }
    else if (n>=strlen(src))
    {
        len=strlen(src);
    }
    int destlen=strlen(dest);
    int i;
    for ( i = 0; i < len; i++)
    {
        dest[destlen+i]=src[i];
    }
    dest[strlen(dest)]='\0'; 
}

void main(){
    char a[5]={"pear"};
    char b[12]={"apple "};
    mystrcat(b,a,4);
    printf("%s\n",b);
}