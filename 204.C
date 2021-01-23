#include<stdio.h>
#include<conio.h>
void main()
{
	int number, tc, t, i, sum, ans[10], k=0;
	clrscr();
	scanf("%d", &tc);
	if(tc<=pow(10, 5)&&tc>=1)
	{
		for(t=0;t<tc;t++)
		{
			scanf("%d", &number);
			if(number<=pow(10, 9)&&number>=1)
			{
				sum=0;
				for(i=3;i<number;i++)
				{
					if(i%3==0||i%5==0)
						sum+=i;
				}
				ans[k++]=sum;
			}
		}
	}
	for(t=0;t<k;t++)
		printf("%d ", ans[t]);
getch();
}