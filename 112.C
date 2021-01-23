#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int number, rem[10], temp, i=0, j;
	long int sum=0;
	clrscr();
	scanf("%d", &number);
	temp=number;
	while(temp)
	{
		rem[i++]=temp%10;
		temp/=10;
	}
	for(j=0;j<i;j++)
	printf("%d ", rem[j]);
	for(j=0;j<i;j++)
	{
		if(j==i-1)
		sum+=pow(rem[j], rem[0]);
		else
		sum+=pow(rem[j],rem[j+1]);
	}
	printf("%d", sum);
getch();
}

