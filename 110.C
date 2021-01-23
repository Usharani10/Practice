#include<stdio.h>
#include<conio.h>
#define row 4
#define col 4
void main()
{
	int a[row][col],b[row][col], i, j, k, l;// row, col;
	clrscr();
       //	scanf("%d %d", &row, &col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d", &a[i][j]);
			b[i][j]=a[i][j];
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(b[i][j]==0)
			{
				k=i;
				l=j ;
				display(k,l, a);
				break;
			}
		}

	}
       for(i=0;i<row;i++)
	{    		for(j=0;j<col;j++)
		{
			printf("%d ", a[i][j]);
		}
	printf("\n");
	}


getch();
}
int display(int k1, int l1, int a[row][col])
{
int i1, j1;
printf("%d %d\n", k1, l1);
	for(i1=0;i1<row;i1++)
	{
		for(j1=0;j1<col;j1++)
		{
		       if(j1==l1||i1==k1)
		      a[i1][j1]=0;

		}
	}
		//	printf("%d %d %d\n", i1, j1,a[i1][j1]);



return 0;

}