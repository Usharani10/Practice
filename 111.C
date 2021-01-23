#include<stdio.h>
#include<conio.h>
void main()
{
	int a[20][20], b[20][20], c[20][20], k, i, j, r1, c1, r2, c2;
	int top, bottom, left, right;
	clrscr();
	scanf("%d %d %d %d", &r1, &c1, &r2, &c2);
	top=0;
	bottom=r1-1;
	left=0;
	right=c2-1;
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d", &b[i][j]);
		}
	}

       if(c1==r2)
	{

		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				c[i][j]=0;
				for(k=0;k<c2;k++)
				{
					c[i][j]=c[i][j]+a[i][k]*b[k][j];
				}
			}
		}

		for(i=0;i<c1;i++)
		{
			for(j=0;j<r2;j++)
			{
			printf("%d ", c[i][j]);
			}
			printf("\n");

		}
		spiral(c, top, bottom, left, right);
		printf("\n");

	}
	getch();
	}


int spiral(int c[3][3], int top, int bottom, int left, int right)
{
	int i;
	if(left>right)  {
	printf("L%d R%d\n", left, right);
		return;
	}
	for(i=left;i<=right;i++)
		printf("%d ",c[top][i]);
	top++;

	if(top>bottom)
	{
	printf("T%d B%d\n", top, bottom);
		return;
		}
	for(i=top;i<=bottom;i++)
		printf("%d ", c[i][right]);
	right--;

	if(left>right)
	{
	printf("L%d R%d\n", left, right);
		return;
		}
	for(i=right;i>=left;i--)
		printf("%d ", c[bottom][i]);
	bottom--;

	if(top>bottom)
	{
	printf("T%d B%d\n", top, bottom);
		return;
		}

	for(i=bottom;i>=top;i--)
		printf("%d ", c[i][left]);
	left++;
	spiral(c, top, bottom, left, right);
	printf("%d %d %d %d\n", top, bottom, left, right);
return;
}
