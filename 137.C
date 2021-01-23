#include<stdio.h>
#include<conio.h>
main()
{
	int a[10][10], i, j, row, col, t, u;
	clrscr();
	scanf("%d %d", &row, &col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(i==j)
				printf("%d", a[i][j]);
			else if(i+j==row-1&&i!=j)
				printf("%d", a[i][j]);
			else  {
			     ///	a[i][j]=0;
				printf(" ");
				}

		}
		printf("\n");

	}
	for(i=0;i<row;i++)
	{
		t=a[i][i];
		a[i][i]=a[i][col-1-i];
		a[i][col-1-i]=t;

	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");

	}
getch();
}


