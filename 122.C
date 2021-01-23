#include<stdio.h>
#include<conio.h>
void main()
{
	int range, sum, i, j, k, l, temp, a[30];
	clrscr();
	scanf("%d %d", &range, &sum);
	for(i=2;i<=range;i++)
	{
		temp=0;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0) {
				temp=1;
				break;
			}
		}
		if(temp==0)
			a[k++]=i;
	}
	for(i=0;i<k;i++)
		printf("%d ", a[i]);

	for(i=0;i<k;i++)
	{
		for(j=i+1;j<k;j++)
		{
			if(a[i]+a[j]==sum)
				printf("%d+%d=%d", a[i],a[j],sum);
		}
	}
	for(i=0;i<k;i++)
	{
		for(j=i+1;j<k;j++)
		{
			for(l=j+1;l<k;k++)
			if(a[i]+a[j]+a[l]==sum)
				printf("%d+%d+%d=%d", a[i],a[j],a[l], sum);
		}
	}
getch();
}



