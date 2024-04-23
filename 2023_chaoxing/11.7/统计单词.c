#include <stdio.h>
int main(){
    char a[1000];
    // fgets(a,sizeof(a),stdin);
    gets(a);
    int i,word=0;
    for (i=0;i<1000;i++)
    {
        if (a[i]=='\0')
        {
            break;
        }else if (a[i]==' ')
        {
            word++;
        }
    }
    word++;
    printf("一共有%d个单词",word);
}