#include<stdio.h>
#include<conio.h>
main()
{
	int a[10][10], i, j, row, col, count=0, m;
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
			if(a[i][i]==0)
			count++;
		}
	}
	m=row+col/2;
	if(count>=m)
		printf("Sparse matrix\n");
	else
		printf("Not a sparse matrix");
}

