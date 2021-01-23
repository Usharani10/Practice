#include<stdio.h>
#include<conio.h>
void main()
{
	int number, ans;
	clrscr();
	scanf("%d", &number);
	ans=divisorsum(number);
	printf("%d ", ans);
getch();
}
int divisorsum(int n)
{
	int i, sum=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
			sum+=i;
	}
return sum;
}

