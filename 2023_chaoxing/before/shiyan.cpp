//������ͬ�;�����ˣ�
//��һ�����������Ҫ�͵ڶ��������������ͬ��
//�ó��ľ�����������ڵ�һ��������������������ڵڶ������������


#include<stdio.h>
int main()
{
	int m,n;//m��n����������
	int i,j,k;//��Ϊѭ������
	printf("������m=");
	scanf("%d",&m);
	printf("������n=");
	scanf("%d",&n);
	int a[m][n],b[n][m],c[m][m];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("������a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("������b[%d][%d]=",i,j);
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