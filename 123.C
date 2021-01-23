#include<stdio.h>
#include<conio.h>
void main()
{
	int range, i, j, k, t=0;
	clrscr();
	scanf("%d", &range);
	for(i=0;i<range;i++)
	{
		for(j=0;j<range-i;j++)
			printf(" ");
		for(k=i;k>=0;k--)
			printf("%d",k);
		for(k=1;k<=i;k++)
			printf("%d",k);
		printf("\n");
	}

getch();
}
