#include<stdio.h>
#include<conio.h>
void main()
{
	int matrix[10][10], size, sum=0, i, j, sum1=0;
	clrscr();
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
			scanf("%d", &matrix[i][j]);
	}
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			if(i==j)
				sum+=matrix[i][j];
			if(i!=j&&i+j==size-1)
				sum+=matrix[i][j];
		}
	}
	printf("Sum:%d ", sum);
getch();
}