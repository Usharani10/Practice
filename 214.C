#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int number, i, quot, divisor, count=0, k, temp, sum=0, t;
	clrscr();
	scanf("%d %d", &number, &k);
	temp=number;
	t=number;
	while(temp)
	{
		temp/=10;
		count++;
	}
	for(i=0;i<k;i++)
	{
		divisor=pow(10, count-1);
		temp=number/divisor;
		temp=temp+(9-temp);
		temp=temp*divisor;//+(number%divisor);
		sum+=temp;
		number=temp%divisor;
		count--;
	}
	printf("%d", sum+(t%divisor));
getch();
}


