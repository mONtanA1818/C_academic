#include <stdio.h>
int main(int argc,char const *argv[])
{
    printf("please input your grade\n");
    int grade;
    scanf("%d",&grade);
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
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
        printf("E");
    default:
        printf("data error!");
        break;
    }
    return 0;
}