#include <stdio.h>
int main(){
    // int b=10;
    int a[10]={19,90,-65,34,8,34,13,100,20,2};
    int i,maxid=0;
    for ( i = 0; i < 10; i++)
    {
        if (a[maxid]<a[i])
        {
            maxid=i;
        }
    }
    printf("The max in array is %d, [%d]",a[maxid],maxid);
    return 0;
}
