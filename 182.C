#include<stdio.h>
#include<conio.h>
void main()
{
	int range, i, j, k;
	clrscr();
	scanf("%d", &range);
	for(i=1;i<=range;i++)
	{
		for(j=1;j<=i;j++)
			printf("*");
	       //	printf("\n");
		for(j=range-i;j>0;j--)
			printf("  ");
		for(k=1;k<=i;k++)
			printf("*");
		printf("\n");
	}
	for(i=1;i<=range;i++)
	{
		for(k=range-i;k>=1;k--)
			printf("*");
		for(j=1;j<=i;j++)
			printf("  ");
		for(j=range-i;j>=1;j--)
			printf("*");
		printf("\n");
	}

getch();
}