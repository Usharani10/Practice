#include<stdio.h>
#include<conio.h>
#include<math.h>
long int no_of_digits(long int, int);
long int split(long int, long int,int);
int main()
{
long int number;
int length;
clrscr();
scanf("%ld %d", &number, &length);
no_of_digits(number, length);
getch();
return 0;
}
long int no_of_digits(long int t, int l)
{
int i, rem=0, count=0;
long int divisor=0, temp;
temp=t;
for(i=0;t>0;i++)
{
	rem=t%10;
	count++;
	t=t/10;
}
divisor=pow(10, count-l);
split(temp, divisor, l);
return 0;
}
long int split(long int dividend, long int divide, int length)
{
int quotient;
long int remainder;
if(divide>0)
{
quotient=dividend/divide;
printf("q:%d\n", quotient);

remainder=dividend%divide;
if(remainder<quotient&&remainder!=0)
printf("%ld\n", remainder);
no_of_digits(remainder, length);
}
return 0;
}