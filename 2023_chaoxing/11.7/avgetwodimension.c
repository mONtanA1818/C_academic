#include <stdio.h>
void main()
{
    int a[2][3]={{11,2,36},{74,66,7}};
    int sum=0,i,j;
    float e=0;
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            sum+=a[i][j];
        }
        
    }
    e=(float)sum/(2*3);
    printf("The average value of this array is%.1f\n",e);
    //maxid
    int maxidOfx=0,maxidOfy=0;
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            if (a[maxidOfx][maxidOfy]<a[i][j])
            {
                maxidOfx=i;
                maxidOfy=j;
            }   
        }
    }
    printf("The maxid =[%d][%d]\n",maxidOfx,maxidOfy);
    //minid
    int minidOfx=0,minidOfy=0;
    for ( i = 0; i < 2; i++)
    {
        for ( j = 1; j < 3; j++)
        {
            if (a[minidOfx][minidOfy]>a[i][j])
            {
                minidOfx=i;
                minidOfy=j;
            }   
        }
    }
    printf("The minid =[%d][%d]\n",minidOfx,minidOfy);
}
