#include<stdio.h>
#include<conio.h>
void main()
{
	int steps, t;
	clrscr();
	scanf("%d", &steps);
       t=findways(steps);
	printf("%d", t);
	getch();
}
int findways(int n)
{
	if(n==1||n==0)
		return 1;
	else if(n==2)
		return 2;
	else
		return findways(n-3)+findways(n-2)+findways(n-1);
}




























       /*	int t_steps, a[3]={1,2,3}, i=0, j, sum=0, b[5], c, k=0, count=0;
	clrscr();
	scanf("%d", &t_steps);
	for(i=0;i<t_steps;i++)
	{
		for(j=i+1;j<t_steps;j++)
		{
			if(a[i]+a[j]==t_steps)
			{
				count++;
				printf("%d %d\n",a[i], a[j]);
			}
			sum=0;k=0;
			while(sum<4)
			{
				sum+=a[j-1];
				b[k++]=a[j-1];
				//count++;
			}
			if(sum==4)
			for(c=0;c<k;c++)
			{
			       count++;
			       printf("%d " ,b[c]);
			}
			printf("\ncount:%d\n", count);


		}
	}
getch();
}

*/