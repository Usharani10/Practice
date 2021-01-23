#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10][10], i, j, r, c;
	int top, bottom, left, right;
	clrscr();
	scanf("%d %d", &r, &c);
	top=0;
	bottom=c-1;
	left=0;
	right=r-1;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	while(1)
	{
		if(left>right)
			break;
		for(i=left;i<=right;i++)
			printf("%d ", a[top][i]);
		top++;

	       if(top>bottom)
			break;
		for(i=top;i<=bottom;i++)
			printf("%d ", a[i][right]);
		right--;

		if(left>right)
			break;
		for(i=right;i>=left;i--)
			printf("%d ", a[bottom][i]);
		bottom--;

		if(top>bottom)
			break;
		for(i=bottom;i>=top;i--) {
			printf("%d ", a[i][left]);
		left++;
	}

}
getch();
}