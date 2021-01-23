#include<stdio.h>
#include<conio.h>
void main()
{
	int range, i,j=0, sum=0, t=2, temp, ans[50], count=0;
	clrscr();
	scanf("%d", &range);
	for(i=800;i<=range;i=i+t, t=t+2)
	{
		printf("%d ", i);
		temp=i;
		sum=0;
		while(temp)
		{
			sum=sum+(temp%10);
			temp/=10;
		}
		ans[j++]=sum;
	}
	printf("\n");
	for(i=0;i<=j-1;i++)
	{
		printf("%d  ", ans[i]);
		temp=ans[i];
		if(temp/10==1)
			count++;
	}
	printf("\n%d\n", count);
getch();
}

