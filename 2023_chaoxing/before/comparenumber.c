#include <stdio.h>
int max(int a[],int len);
int main()
{
    int amount[4]={};
    printf("请输入四个数字中间用空格隔开\n");
    scanf("%d %d %d %d",&amount[0],&amount[1],&amount[2],&amount[3]);
    int len=sizeof(amount)/sizeof(amount[0]);
    int i;
    for ( i = 0; i < sizeof(amount)/sizeof(amount[0]); i++)
    {
        int maxid=max(amount,len);
        int t;
        t=amount[len-1];
        amount[len-1]=amount[maxid];
        amount[maxid]=t;
        len-=1;
    }

    for ( i = 0; i < sizeof(amount)/sizeof(amount[0]); i++)
    {
        printf("%d\t",amount[i]);
    }
    return 0;
    
}

int max(int a[],int len)
{
	int i; 
    int maxid=0;
    for ( i = 0; i < len; i++)
    {
        if (a[i]>a[maxid])
        {
            maxid=i;
        }
        
    }
    return maxid;
}
