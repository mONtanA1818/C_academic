#include <stdio.h>
void switch_martix(int a[3][3],int b[3][3]);
int main(int argc, char const *argv)
{
    int i,k;
    int a[3][3]={{1,2,3},
                 {4,5,6},
                 {7,8,9}};
    printf("oringal_martix:\n");
    for ( i = 0; i < 3; i++)
    {
        for ( k = 0; k < 3; k++)
        {
            printf("%d ",a[i][k]);
        }
        printf("\n");    
    }
    int b[3][3];
    switch_martix(a,b);
    printf("switch_martix:\n");
    for ( i = 0; i < 3; i++)
    {
        for ( k = 0; k < 3; k++)
        {
            printf("%d ",b[i][k]);
        }
        printf("\n");    
    }
    return 0;
}

void switch_martix(int a[3][3],int b[3][3]){
    int i,k;
    for ( i = 0; i < 3; i++)
    {
        for ( k = 0; k < 3 ; k++)
        {
            b[i][k]=a[k][i];
        }
        
    }
        
}

