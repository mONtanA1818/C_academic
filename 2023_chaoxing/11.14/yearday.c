#include <stdio.h>
int main(int argc,char const *argv){
    printf("please input the day like '2023/6/24' \n");
    int year,month,day,sum=0;
    scanf("%d/%d/%d",&year,&month,&day);
    if (year%4==0 && year%100!=0 || year%400==0 )
    {
        switch (month)
        {
        case 1:
            sum+=day;
            break;
        case 2:
            sum+=31+day;
            break;
        case 3:
            sum+=60+day;
            break;
        case 4:
            sum+=91+day;
            break;
        case 5:
            sum+=121+day;
            break;
        case 6:
            sum+=152+day;
            break;
        case 7:
            sum+=182+day;
            break;
        case 8:
            sum+=213+day;
            break;
        case 9:
            sum+=244+day;
            break;
        case 10:
            sum+=274+day;
            break;
        case 11:
            sum+=305+day;
            break;
        case 12:
            sum+=335+day;
            break;
               }
    }else
    {
        switch (month)
        {
        case 1:
            sum+=day;
            break;
        case 2:
            sum+=31+day;
            break;
        case 3:
            sum+=59+day;
            break;
        case 4:
            sum+=90+day;
            break;
        case 5:
            sum+=120+day;
            break;
        case 6:
            sum+=151+day;
            break;
        case 7:
            sum+=181+day;
            break;
        case 8:
            sum+=212+day;
            break;
        case 9:
            sum+=243+day;
            break;
        case 10:
            sum+=273+day;
            break;
        case 11:
            sum+=304+day;
            break;
        case 12:
            sum+=334+day;
            break;
    }
    }
    printf("%d",sum);
}