#include <stdio.h>
int main(int argc, char const *argv[])
{
    int grade=0;
    printf("please input student's grade");
    scanf("%d",&grade);
    if (grade>=0 && grade<=100)
    {
        grade=grade/10;
        switch (grade)
        {
        case 10:
        case 9:
            printf("A");
            break;
        case 8:
            printf("B");
            break;
        case 7:
            printf("C");
            break;
        case 6:
            printf("D");
            break;
        default:
            printf("E");
            break;
    }
    }else
    {
        printf("data error");
    }
    return 0;
}