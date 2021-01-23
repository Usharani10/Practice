#include<stdio.h>
#include<conio.h>
void main()
{
	int number, i, j, k;
	clrscr();
	scanf("%d", &number);
	for(i=1;i<=number;i++)
	{
		for(j=0;j<=number-i;j++)
			printf(" ");
		for(k=1;k<=number;k++)
			printf("*");
		for(j=0;j<=number-i;j++)
			printf(" ");
		for(k=1;k<=number;k++)
		{
			if(k==1||k==number||i==1||i==number)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
      /*	printf("\n\n\n");
	for(i=1;i<=number;i++)
	{
		for(j=0;j<=number-i;j++)
			printf(" ");
		for(k=1;k<=number;k++)
		{
			if(k==1||k==number||i==1||i==number)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}   */
getch();
}