#include<stdio.h>
#include<conio.h>
void main()
{
int number, i, temp=0;
clrscr();
scanf("%d", &number);
for(i=2;i<=number/2;i++)
{
	if(number%i==0)
	{
		temp=1;
		break;
	}
}
if(temp==0)
printf("%d is prime number", number);
else
printf("%d is not a prime  number", number);
getch();
}

