#include<stdio.h>
#include<conio.h>
main()
{
	int range, row, col;
	clrscr();
	scanf("%d", &range);
	for(row=1;row<=range;row++)
	{
		for(col=range;col>=row;col--)
			printf("%d", col);
		printf("\n");
	}
getch();
}
