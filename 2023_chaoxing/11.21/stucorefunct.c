#include <stdio.h>
void max(int* a, int len,int *data);
float func_stu_average(int b[5]);
float func_class_average(int stu_class_core[10]);
int main(int argc,char const *argv[]){
    int a[10][5]={{90,91,93,94,99},
                {92,89,78,99,62},
                {91,93,94,97,94},
                {94,83,84,78,66},
                {100,87,78,93,78},
                {87,78,41,95,98},
                {90,98,88,89,99},
                {90,78,96,46,63},
                {78,77,99,77,95},
                {45,99,89,74,66}};
               
    float stu_average[10]={};
    int i;
    for ( i = 0; i < 10; i++)
    {
        stu_average[i]=func_stu_average(a[i]);
    }
    printf("Every student 's average scoreis :\n");
    for ( i = 0; i < 10; i++)
    {
        printf("%.1f ",stu_average[i]);
    }
    float class_average[5]={};  
    int k;
    for ( i = 0; i < 5; i++)
    {
        int stu_class_socre[10]={};
        for ( k = 0; k < 10; k++)
        {
            stu_class_socre[k]=a[k][i];
        }

        class_average[i] = func_class_average(stu_class_socre);
    }
    printf("\nEvery class's average score is \n");
    for ( i = 0; i < 5; i++)
    {
        printf("class[%d]'s average=%.1f ",i+1,class_average[i]);
    }
    //all grade data in a array
    int grade[50]={0};
    int index=0; //
    for ( i = 0; i < 10; i++)
    {
        for ( k = 0; k < 5; k++)
        {
            grade[index]=a[i][k];
            index++;
        }
    }
    int len=sizeof(grade)/sizeof(grade[0]);
    int data[2]={0};   // [0]is student number  [1]is class number
    max(&grade[0],len,&data[0]);
    printf("\n");
    printf("the highest grade is student[%d] for class[%d]",data[0]+1,data[1]+1);
    return 0;
}


float func_stu_average(int b[5])
{
    int i;
    float num,sum=0;
    for ( i = 0; i < 5; i++)
    {
        sum+= b[i];
    }
    num = sum/5;
    return num;
}

float func_class_average(int stu_class_core[10])
{     
    int i;
    float num,sum=0;
    for ( i = 0; i < 10; i++)
    {
        sum+=stu_class_core[i];
    }
    num = sum/10;
    return num;
}

void max(int* a, int len,int *data){
    //serach for id
    int maxid = 0;
    int i;
    for ( i = 0; i < len; i++)
    {
        if (a[maxid]<a[i])
        {
            maxid=i;
        }        
    }
    maxid+=1;
    int max_class_id=maxid%5-1;
    int max_student_id=maxid/5;
    data[0]=max_student_id;
    data[1]=max_class_id;
}