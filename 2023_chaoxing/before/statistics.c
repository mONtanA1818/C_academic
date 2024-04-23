#include <stdio.h>
int main(int argc,char const *argv)
{
    int ch,letter=0,space=0,number=0,other=0;
    printf("please input your str\n");
    while ((ch=getchar())!='\n')
    {
        if (ch>=60 && ch<=90 || ch>=97 && ch<=122)
        {
            letter++;
        }
        else if (ch==' ')
        {
            space++;
            // printf("This is a space\n");
        }
        else if (ch>='0' && ch<='9')
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
    return 0;
}