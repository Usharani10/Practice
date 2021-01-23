#include<stdio.h>
#include<conio.h>
#define row 4
#define col 4
void main()
{
	int a[row][col]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15,16}, i, j, temp;
	clrscr();
	for(i=0;i<row;i++)
	{
		for(j=i;j<col;j++)
		{
			temp=a[i][j];
			a[i][j]=a[j][i];
			a[j][i]=temp;
		}

	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}

	for(i=row-1;i>=0;i--)
	{
		for(j=0;j<col;j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}

	/*for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			temp[i][j]=a[j][i];
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			printf("%d ", temp[i][j]);
		printf("\n");
	}
	printf("\n");
	for(i=row-1;i>=0;i--)
	{
		for(j=0;j<col;j++)
			printf("%d ", temp[i][j]);
		printf("\n");
	}  */
getch();
}
