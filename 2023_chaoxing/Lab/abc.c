#include<math.h>
#include<stdio.h>
void twox(int a, int b, int c,int detla){
    printf("This equation has two solution\n");
    float x1=(-b+sqrt(detla))/2;
    float x2=(-b-sqrt(detla))/2;
    printf("x1=%.2f  x2=%.2f",x1,x2);
}

void onex(int a, int b, int c,int detla){
    printf("This equation has one solution\n");
    float x1=(-b+sqrt(detla))/2;
    printf("x1=%.2f",x1);
}

void nonex(int a, int b, int c){
    printf("This equation has no solution");
}
void main(){
    int a, b, c;
    printf("please input the value of a b c,like '3 4 5',use space between numbers");
     scanf("%d %d %d",&a,&b,&c);
    int detla=b*b-4*a*c;
    if (detla==0)
    {
        onex(a,b,c,detla);
    }else if (detla>0)
    {
        twox(a,b,c,detla);
    }else if (detla<0)
    {
        nonex(a,b,c);
    }
    
}
