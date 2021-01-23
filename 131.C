#include<stdio.h>
#include<conio.h>
void main()
{
	int range, i, j, fact;
	clrscr();
	scanf("%d", &range);
	for(i=range;i>=1;i--)
	{
		fact=1;
		for(j=1;j<=i;j++)
			fact*=j;
		printf("%d->%d\n",i, fact);
	}
getch();
}
