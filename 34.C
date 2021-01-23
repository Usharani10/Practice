#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int number, digits, i, rem, power, temp, count=0, quot;
	clrscr();
	scanf("%d", &number);
	printf("Enter number to insert\n");
	scanf("%d", &digits);
	temp=number;
	while(temp)
	{
		temp/=10;
		count++;
	}
		power=pow(10, count-(count/2));
		quot=number/power;
		printf("%d%d%d", quot, digits, number%power);
	 getch();
     }