#include<stdio.h>
#include<conio.h>
void main()
{
	int range, i, j;
	clrscr();
	scanf("%d", &range);
	for(i=1;i<=range;i++)
	{
		for(j=1;j<=range-i;j++)
			printf(" ");
		for(k=1;k<=2*i-1;k++)
		{
			if(k%2!=0)
				printf("*");
			else
				printf("$");
		}
	}
getch();
}