#include <stdio.h>
void tongji(char *a);
int main(){
    char a[100];
    // fgets(a,sizeof(a),stdin);
    gets(a);
    tongji(&a);
}

void tongji(char *a){
        int i=0,letter=0,space=0,number=0,other=0;
    for (i=0;i<100;i++)
    {
        if (a[i]=='\0')
        {
            break;
        }
        else if (a[i]>='A'&&a[i]<='Z' || a[i]>='a'&&a[i]<='z')
        {
            letter++;
        }
        else if (a[i]==' ')
        {
            space++;
        }
        else if (a[i]>='0' && a[i]<='9')
        {
            number++;
        }
        else
        {
            other++;
        }

    }
    printf("letters=%d\n",letter);
    printf("space=%d\n",space);
    printf("number=%d\n",number);
    printf("other=%d\n",other);
}