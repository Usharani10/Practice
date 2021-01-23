#include<stdio.h>
#include<conio.h>
void main()
{
	int matrix[10][10], row, col, i, j, top, bottom, left, right;
	clrscr();
	scanf("%d %d",&row, &col);
	top=0;
	bottom=row-1;
	left=0;
	right=col-1;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			scanf("%d", &matrix[i][j]);
	}
	while(1)
	{
		if(top>bottom)
			break;
		for(i=left;i<=right;i++)
			printf("%d ",matrix[top][i]);
		top++;
		if(left>right)
			break;
		for(i=top;i<=bottom;i++)
			printf("%d ", matrix[i][right]);
		right--;
		if(top>bottom)
			break;
		for(i=right;i>=left;i--)
			printf("%d ", matrix[bottom][i]);
		bottom--;
		if(left>right)
			break;
		for(i=bottom;i>=top;i--)
			printf("%d ", matrix[i][left]);
		left++;
	}
getch();
}