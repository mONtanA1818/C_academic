#include <stdio.h>
void bubble(int *a, int n);
int main(void){
    int a[3]={0};
    int len=3;
    for (int i = 0; i <len ; i++)
    {
        int num;
        printf("a[%d]=:",i);
        scanf("%d",&*(a+i));
    }
    bubble(a,3);
    int *p;
    p=a;
    for (int i = 0; i < len; i++)
    {
        printf("%d\t",*(p+i));
    }
    
}

void bubble(int *a, int n){
    for (int i = n-1; i > 0; --i)
    {
        for (int j = 0; j < i; ++j)
        {
            if (a[j]>a[j+1])
            {
                int temp =a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
            
        }
        
    }
    
}