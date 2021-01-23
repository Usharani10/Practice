#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int number, no_of_digits=0, i, j, temp, sum=0, divisor, quot, rem, ans;
	clrscr();
	scanf("%d",&number);
	temp=number;
	while(temp)
	{
		temp/=10;
		no_of_digits++;
	}
	divisor=pow(10, no_of_digits-1);
	quot=number/divisor;
	rem=number%divisor;
	temp=rem;
	while(temp)
	{
		 sum=sum*10+(temp%10);
		 temp/=10;
	}
	ans=quot*divisor+sum;
	if(ans>number)
	printf("%d", ans);
	else
	printf("%d", number+1);
getch();
}




