#include<stdio.h>
#include<conio.h>
main()
{
	int a[10][10], i, j, row, col, temp=0;
	clrscr();
	scanf("%d %d", &row, &col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for(i=0;i<row;i++)
	{
	      //	temp=0;
		for(j=0;j<col;j++)
		{
			if(a[i][i]==a[i][j]&&i!=j){
				temp=1;
				break;
				}
		}
	  }
	if(temp==0)
		printf("Distinct\n");
	else
		printf("Not distinct\n");

getch();
}
