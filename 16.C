#include<stdio.h>
#include<conio.h>
#include<math.h>
long int no_of_digits(long int, int);
long int split(long int, long int,int);
int main()
{
long int number;
int  length,a;
clrscr();
scanf("%ld %d", &number, &length);
no_of_digits(number, length);
//printf("max:%d", te);
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
	int quotient,q,rem=0, sum=0,a[10];
	int i=0,j=0, max=0, k;
	long int remainder;
	if(divide>0)
	{
		quotient=dividend/divide;
		printf("q:%d\n", quotient);
		q=quotient;
		for(i=0;q>0;i++)
			{
				rem=q%10;
				sum=sum+rem;
				q=q/10;

			       //	if(j<sum)
				a[j++]=sum;
			}
		       //	printf("s:%d\n", sum);
		remainder=dividend%divide;
		if(remainder<quotient&&remainder!=0)
			printf("%ld\n", remainder);
		no_of_digits(remainder, length);
	}
      //	printf("sum:%d\n", j);
	for(i=0;i<j-1;i++)
	{
		if(a[i]>max)
			max=a[i];
		     //	printf("%d\n", max);

	}
		 return max;
	}