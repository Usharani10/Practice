#include<stdio.h>
#include<conio.h>
void main()
{
	int number, i, j;
	clrscr();
	scanf("%d", &number);
	for(i=0;i<3;i++)
	{
		for(j=0;j<number;j++)
			printf("*");
		printf("\n");
	}
	printf("\n\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<number;j++)
		{
			if(j==0||j==number-1)
				printf("*");

			else
			{
				if(i==0||i==2)
					printf("*");
				else
				printf(" ");
			}
		}
		printf("\n");
	}

getch();
}
