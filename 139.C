#include<stdio.h>
#include<conio.h>
main()
{
	int a[10][10], i, j, row, col, temp, k;
	clrscr();
	scanf("%d %d", &row, &col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	//for row
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			for(k=j+1;k<col;k++)
		       {
				if(a[i][j]>a[i][k])
				{
					temp=a[i][j];
					a[i][j]=a[i][k];
					a[i][k]=temp;
				}
		       }



		}
	}

       //for column
	/*for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			for(k=j+1;k<col;k++)
		       {
				if(a[j][i]>a[k][i])
				{
					temp=a[j][i];
					a[j][i]=a[k][i];
					a[k][i]=temp;
				}
		       }
		}
	}*/








	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d", a[i][j]);
		}
		printf("\n");
	}
getch();
}
