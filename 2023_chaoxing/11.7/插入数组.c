#include <stdio.h>
int main(){
    int a[]={1,2,3,4,5};
    int i;
    int len=sizeof(a)/sizeof(a[0]);
    printf("请输入您在[%d]号位需要添加的数",len);
    scanf("%d",&a[len]);
    for ( i = 0; i <= len; i++)
    {
        printf("%d ",a[i]);
    }
    
}