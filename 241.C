#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10][2],b[10][2], i, j, k=0, l=0, c[10][2];
	clrscr();
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		if(a[i][1]>b[i][1])
		{
			j=0;
			c[i][j++]=a[i][k];
			c[i][j]=a[i][j];
		}
		else if(a[i][1]<b[i][1])
		{
			j=0;
			c[i][j++]=b[i][k];
			c[i][j]=b[i][j];
		}
		else
		{
			j=0;
			c[i][j++]=a[i][k]+b[i][k];
			c[i][j]=a[i][j];
		}
		  k++;
		 // l++;
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ", c[i][j]);
		}
		printf("\n");
	}
getch();
}




