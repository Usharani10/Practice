#include<stdio.h>
#include<conio.h>
main()
{
	int range, j, i, t=0;
	clrscr();
	scanf("%d", &range);
	for(i=1;i<=range;i++)
	{       t=0;
		for(j=1;j<=i;j++)
		{
		       printf("%d ", j+t);
		       t++;
		}
		printf("\n");
	}
getch();
}