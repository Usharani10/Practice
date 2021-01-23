#include<stdio.h>
#include<conio.h>
void main()
{
	int range, i, j, t;
	clrscr();
	scanf("%d", &range);
	for(i=1;i<=range;i++)
	{
		t=i+65;
		for(j=1;j<=i;j++)
			printf("%c ", t-1);
		printf("\n");
	}
	getch();
}