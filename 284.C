#include<stdio.h>
#include<conio.h>
#define row 4
#define col 4
void main()
{
	//char a[row][col]={{'*','*','*','^','*', '*', '*'}, {'*','*','*','|','*', '*', '*'},{'*','*','*','|','*', '*', '*'},			  {'*','*','*','|','*', '*', '*'}};
	int a[row][col]={{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
	int i, j, temp[col][row], c, k, t;
	clrscr();
	for(i=0;i<col;i++)
	{
		for(j=0;j<row;j++)
			temp[i][j]=a[j][i];
	}
	for(i=0;i<col;i++)
	{
		for(j=0;j<row;j++)
			printf("%d ", temp[i][j]);
		printf("\n");
	}
	printf("\n");

       //	for(i=0;i<col;i++)
	//{
	k=0;t=0; 	j=col-1;
	while(j)
	{
	for(i=0;i<col;i++)
	{
		c=temp[i][k];
		temp[i][k]=temp[i][j];
		temp[i][j]=c;
	}
	j--;
	k++;
	}
	for(i=0;i<col;i++)
	{
		for(j=0;j<row;j++)
			printf("%d ", temp[i][j]);
		printf("\n");
	}

getch();
}