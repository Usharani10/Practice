#include<stdio.h>
#include<conio.h>
void main()
{
	int range, i, j, k;
	clrscr();
	scanf("%d", &range);
	for(i=1;i<=range;i++)
	{
		for(k=1;k<=range-i;k++)
			printf(" ");
		for(j=1;j<=i;j++)
		{
		if(j==1||j==i)
			printf(" *");
		else
		printf("  ");
		}
		printf("\n");
	}
	for(i=1;i<=range;i++)
	{
		for(k=1;k<i;k++)
			printf(" ");
		for(j=range;j>=i;j--)
		{
			if(j==range||j==i)
				printf(" *");
			else
				printf("  ");
		}
		printf("\n");
	}
	/*for(i=1;i<=range;i++)
	{
		for(k=1;k<=range-i;k++)
			printf(" ");
		for(j=1;j<=i;j++)
			printf("* ");
		printf("\n");
	}
	for(i=1;i<=range;i++)
	{
		for(k=1;k<i;k++)
			printf(" ");
		for(j=range;j>=i;j--)
			printf("* ");
		printf("\n");
	}  */
getch();
}