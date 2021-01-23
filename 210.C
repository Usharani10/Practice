#include<stdio.h>
#include<conio.h>
void main()
{
	int range, i, j;
	clrscr();
	scanf("%d", &range);
	for(i=1;i<=range;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i==1)
				printf("%d", i);
			if(i>1)
			printf("%d", i);
			if(j!=i)
			printf("*");

		}
		printf("\n");
	}
	for(i=range;i>0;i--)
	{
		for(j=1;j<=i;j++)
		{
			if(i==1)
				printf("%d", i);
			if(i>1)
			printf("%d", i);
			if(j!=i)
			printf("*");
		}
		printf("\n");

	}
getch();
}