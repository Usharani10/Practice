#include<stdio.h>
#include<conio.h>
#define r1 3
#define c1 3
int temp[5][5];
void print(int, int);
void main()
{
	int a[5][5], i, j, k;
	clrscr();
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
			scanf("%d", &a[i][j]);
	}
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			if(a[i][j]==1)
			{
			     //	printf("%d %d\n", i, j);
				print(i, j);
			}
		}
	}

	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
			printf("%d ", temp[i][j]);
		printf("\n");
	}


getch();
}
void print(int r, int c)
{
	static int i, j;
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			if(i==r||j==c)
				temp[i][j]=1;
		}
	}
}