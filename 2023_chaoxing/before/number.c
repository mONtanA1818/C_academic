#include <stdio.h>
#include <math.h>
int main()
{
    printf("请输入一个不多于五位的正整数\n");
    int number,a=0;
    scanf("%d",&number);
    a=number;
    int cnt=0;
    do
    {
        number=number/10;
        cnt++;
    } while (number>0);
    printf("这是%d位数\a",cnt);
    number=a;
    printf("\n");
    int time;
    time=cnt;
    int i;
    for ( i = cnt; i > 0; i--)
    {
        int re=0;
        int ar=0;
        ar=pow(10,(time-1));
        re=number/ar;
        number=number-ar*re;
        printf("%d\t",re);
        time--;
    }
    printf("\n");
    number=a;
    for ( i = 0; i < cnt; i++)
    {
        int q;
        q=number%10;
        printf("%d",q);
        number/=10;
    }
    return 0;
}
