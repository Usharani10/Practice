#include<stdio.h>
#include<conio.h>
void main()
{
	int matrix[10][10], row, col, sum=0, i, j;
	clrscr();
	scanf("%d %d",&row, &col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			scanf("%d", &matrix[i][j]);
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(i==0||i==row-1||j==0||j==col-1)
				sum+=matrix[i][j];
		}
	}
	printf("%d", sum);
getch();
}