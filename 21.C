#include<stdio.h>
#include<conio.h>
void main()
{
int number, i, rem, sum=0, temp;
clrscr();
scanf("%d", &number);
for(i=number+1;i>0;i++)
{
	temp=i;
	sum=0;
	while(temp)
	{
		rem=temp%10;
		sum=sum*10+rem;
		temp=temp/10;
	}
	if(i==sum)
	{
		printf("%d is immediate palindrome", sum);
		break;
	}
}
getch();
}

