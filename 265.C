#include<stdio.h>
#include<conio.h>
main()
{
	int range, row, col, k;
	clrscr();
	scanf("%d", &range);
	for(row=range;row>0;row--)
	{
		for(col=1;col<=row;col++)
		{
			for(k=1;k<=row;k++)
			{
				printf("*");
			}
			printf(" ");
		}
		printf("\n");
	}
getch();
}

	/*for(row=5;row>0;row--)
	{
		for(col=range*row;col>0;col--)
		{
		       if(col!=1)
			printf("*");
		       if(col==1)
			printf("* ");
		}
		printf("\n");
	}
getch();
}             */
