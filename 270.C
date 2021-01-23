#include<stdio.h>
#include<conio.h>
void main()
{
	int range, i, j, k;
	clrscr();
	scanf("%d", &range);
	for(i=1;i<range;i++)
	{
		if(i==1||i==2)
		{
		if(i==1)printf(" ");
		for(k=range;k>=1;k--)
			printf("*");
		}
		else
		{
		for(k=range;k>=i-1;k--)
			printf("*");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d", i);
			if(j!=i)
			printf("*");
		}
		if(i==1||i==2)
		{
		for(k=range;k>=1;k--)
			printf("*");
		}
		else
		{
		for(k=range;k>=i-1;k--)
			printf("*");
		}
		printf("\n");
	}
	getch();
}