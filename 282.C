#include<stdio.h>
#include<conio.h>
int m=4;
int n=4;
void main()
{
	int a[4][4]={{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}}, prev, current;
	int i=0, j=0, row=0, col=0;
      //	int m=3, n=3;
	clrscr();
	while(row<m&&col<n)
	{
		if(row+1==m||col+1==n)
			break;
		prev=a[row+1][col];
		for(i=col;i<n;i++)
		{
			current=a[row][i];
			a[row][i]=prev;
			prev=current;
		}
		row++;
		for(i=row;i<m;i++)
		{
			current=a[i][n-1];
			a[i][n-1]=prev;
			prev=current;
		}

		n--;
		for(i=n-1;i>=col;i--)
		{
			current=a[m-1][i];
			a[m-1][i]=prev;
			prev=current;
		}

		m--;

		for(i=m-1;i>=row;i--)
		{
			current=a[i][col];
			a[i][col]=prev;
			prev=current;
		}

		col++;
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
getch();
}









