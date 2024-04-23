# include <stdio.h>
int primefunc(int a);

int main(){
    int num;
    printf("please input a number\n");
    scanf("%d",&num);
    primefunc(num);
    return 0;
}
int primefunc (int a){
    int t=1,i;
    for ( i = 2; i < a; i++)
    {
        if (a%i==0)
        {
            printf("This is not a prime number");
            break;
        }
        
    }
    if (i==a)
    {
        printf("This is a prime number");
    }
    return 0;
}
