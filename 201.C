#include<stdio.h>
#include<conio.h>
void main()
{
	int mat[10][10], res[10][10], n, m, tc, x, i, j=0, count=0, temp, t;
	clrscr();
	scanf("%d", &tc);
	if(tc<=100&tc>=1)
	{
		for(t=0;t<tc;t++){
		scanf("%d %d", &n, &m);
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				scanf("%d", &mat[i][j]);
				res[i][j]=mat[i][j];

			}
		}
		scanf("%d", &x);

		while(x)
		{
		j=0;
		for(i=0;i<n;i++)
		{
			if(i%2!=0)
			{
				temp=res[i][j];
				res[i][j]=res[i][j+1];
				res[i][j+1]=temp;
			}
			if(i%2==0)
			{
				temp=res[i][j];
				res[i][j]=res[i][j+1];
				res[i][j+1]=temp;
			}
		      // j++;
		       //printf("%d %d\n",res[i][j], res[i][j+1]);
		       j++;

		}
		x--;
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
			//printf("%d",res[i][j]);
			  if(mat[i][j]==res[i][j])
				count++;
			}
			printf("\n");
		}
		}
	}

		if(n*m==count)
			printf("1\n");
		else
			printf("0\n");
getch();
}


