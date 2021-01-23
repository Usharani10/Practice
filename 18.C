#include<stdio.h>
#include<conio.h>
int main()
{
int number, digits=0, i, temp, rem, sum=0, check;
clrscr();
scanf("%d", &number);
temp=number;
check=number;
for(i=0;temp>0;i++)
{
	temp=temp/10;
	digits++;
}
while(number)
{
	rem=number%10;
	sum+=pow(rem, digits);
	number/=10;
}
if(check==sum)
printf("%d is Armstrong number", check);
else
printf("%d is not an  Armstrong number", check);
getch();
return 0;
}
int pow(int r, int d)
{
	int mul=1, t;
	for(t=0;t<d;t++)
	mul=mul*r;
   return mul;
}
