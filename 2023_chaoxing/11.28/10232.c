#include <stdio.h>
void output(int *a,int len);
void process(int *a, int n);
void write(int *a,int len);
int main(void){
    int len=10;
    int arr[10]={0};
    write(arr,len);
    process(arr,len);
    output(arr,len);    
}

void write(int *a,int len){
    for (int i = 0; i < len; i++)
    {
        printf("arr[%d]=",i);
        scanf("%d",&*(a+i));
    }
}

void output(int *a,int len){
    printf("\n");
    printf("arr={");
    for (int i = 0; i < len; i++)
    {
        printf("%d ",*(a+i));
    }
    printf("}");
}

void process(int *a, int n){
    int maxid=n-1;
    int minid=0;
    for (int i = n-1; i > 0 ; --i)
    {
        if (a[maxid]<a[i])
        {
            maxid=i;
        }
    }
    int temp = *(a+n-1);
    *(a+n-1)=*(a+maxid);
    *(a+maxid)=temp;
    for (int i = n-1; i > 0; --i)
    {
        if (a[minid]>a[i])
        {
            minid=i;
        }
    }
    temp = *a;
    *a=*(a+minid);
    *(a+minid)=temp;
}
