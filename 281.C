#include<stdio.h>
#include<conio.h>
#define r1 3
#define c1 2

void main()
{
	int a[5][5], i, j, top, bottom, right;
	clrscr();
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
			scanf("%d", &a[i][j]);
	}
	top=0;right=c1;bottom=r1;
	while(1)
	{
		if(bottom<0)
			break;
		for(i=0;i<=bottom-1;i++)
			printf("%d ", a[i][top]);
		top++;
		if(top>bottom)
		break;
		for(i=top;i<=right-1;i++)
			printf("%d ", a[bottom-1][i]);
		bottom--;
		printf("\n");
	}
getch();
}