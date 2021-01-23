#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int number, power, count=0, temp, quot;
	clrscr();
	scanf("%d", &number);
	temp=number;
	while(temp)
	{
		temp=temp/10;
		count++;
	}
	while(number)
	{
		power=pow(10, count-1);
		quot=number/power;
		printf("%d ",quot*power);
		number=number%power;
		count--;

	}
getch();
}


