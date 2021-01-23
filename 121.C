#include<stdio.h>
#include<conio.h>
main()
{
	int range, i, j, k;
	clrscr();
	scanf("%d", &range);
	for(i=1;i<=range;i++)
	{
		for(j=1;j<=range-i;j++)
			printf(" ");
		for(k=1;k<=i;k++)
			printf("*");
		printf("\n");
	}
	for(i=range-1;i>0;i--)
	{
		for(j=range-i;j>0;j--)
			printf(" ");
		for(k=i;k>0;k--)
			printf("*");
		printf("\n");
	}
getch();
}
