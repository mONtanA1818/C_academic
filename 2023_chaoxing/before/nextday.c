#include <stdio.h>
int main(void)
{
    int y,m,d;
    while (1)
    {
    printf("请输入一个时期,格式如2001/1/1\n");
    scanf("%d/%d/%d7",&y,&m,&d);
    switch (m)
    {
        case 10:
        case 8:
        case 7:
        case 5:
        case 3:
        case 1:
            if (d==31)
            printf("%d/%d/1\n",y,m+1);
            else printf("%d/%d/%d\n",y,m,d+1);
            break;
        case 11:
        case 9:
        case 6:
        case 4:
            if (d==30)
            printf("%d/%d/1\n",y,m+1);
            else printf("%d/%d/%d\n",y,m,d+1);
            break;
        case 12:
            if (d==31)
            printf("%d/1/1\n",y+1);
            else printf("%d/%d/%d\n",y,m,d+1);
            break;
        case 2:
            if (y%4==0 && y%100 != 0)
            {
                if (d==29)
                {
                    printf("%d/3/1\n",y);
                }
                else
                {
                    printf("%d/%d/%d\n",y,m,d+1);
                }
            }
            else
            {
                if (d==28)
                {
                    printf("%d/3/1\n",y);
                }
                else if (d==29)
                {
                    printf("该年份不是闰年，无29号，请重新输入\n");
                }
                else
                {
                    printf("%d/%d/%d\n",y,m,d+1);
                }
            }
            break;
    default:
        printf("您输入的格式有误\n");
        break;
    }
    }
    
    return 0;
}