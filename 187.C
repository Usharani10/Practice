#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int x, n, i, j, sum=0, p1, p;
	clrscr();
	scanf("%d %d", &x, &n);
	for(i=1;i<=n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			p=pow(i,x);
			p1=pow(i,x)+pow(j,x);
		       //	printf("%d %d\n", p, p1);
			if(p==n)
				printf("%d^%d=%d\n", i,x, n);
			else if(p1==n)
			  printf("%d^%d+%d^%d=%d\n", i, x, j, x, n);
		}
	}
	getch();
}