#include<stdio.h>
#include<conio.h>
void main()
{
	int number, i, j, k;
	clrscr();
	scanf("%d", &number);
	for(i=1;i<=number-2;i++)
	{
		for(j=1;j<=i+1;j++)
			printf(" ");
		printf("*");
		printf(" ");
		for(j=1;j<=(number-i)*2;j++)
			printf(" ");
		printf("*");
		printf("\n");
	}
	for(k=1;k<=number+2;k++)
		printf("*");
	printf(" ");
	for(k=1;k<=number+2;k++)
		printf("*");
	printf("\n");
	for(i=1;i<=number-2;i++)
	{
		for(j=1;j<=number-i;j++)
			printf(" ");
		printf("*");
		printf("   ");
		for(j=1;j<=i*2;j++)
			printf(" ");
		printf("*");
		printf("\n");
	}
       /*	printf("\n");
	for(i=1;i<=number-2;i++)
	{
		for(j=1;j<=number-i;j++)
			printf(" ");
		printf("*");
		printf("\n");
	}
	printf("\n\n\n\n");
	for(i=1;i<=number-2;i++)
	{
		for(j=1;j<=number-i;j++)
			printf(" ");
		printf("*");
		printf("\n");
	}

	for(i=1;i<=number-2;i++)
	{
		for(j=1;j<=i;j++)
			printf(" ");
		printf("*");
		printf("\n");
	}     */

getch();
}
