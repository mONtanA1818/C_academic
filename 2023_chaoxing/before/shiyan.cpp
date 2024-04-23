//两个不同型矩阵相乘，
//第一个矩阵的列数要和第二个矩阵的行数相同，
//得出的矩阵的行数等于第一个矩阵的行数，列数等于第二个矩阵的列数


#include<stdio.h>
int main()
{
	int m,n;//m，n表矩阵的行列
	int i,j,k;//均为循环变量
	printf("请输入m=");
	scanf("%d",&m);
	printf("请输入n=");
	scanf("%d",&n);
	int a[m][n],b[n][m],c[m][m];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("请输入a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("请输入b[%d][%d]=",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			for(k=0;k<n;k++)
			{
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
			}
		}
	}
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("c[%d][%d]=%d",i,j,c[i][j]);
		}
	}
	
	return 0;
}