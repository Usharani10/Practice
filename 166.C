#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int  digit, temp, count=0, f, l, t, c=0, p;
	long int sum=0, rem, number;
	clrscr();
	scanf("%ld", &number);
	scanf("%d",&digit);
	temp=number;
	t=number;
	while(temp)
	{
		temp/=10;
		count++;
	}
	while(number)
	{
		rem=number%10;
		c++;
		if(rem==digit)
		{
			p=pow(10, c-1);
			f=t/p;
			l=t%p;
			rem=f/10;
			printf("%d %d %d %d\n", f, l, rem, p);
			break;
		}
		number/=10;
	}

	sum=rem*p+l;
	printf("%ld", sum);

	getch();
}
