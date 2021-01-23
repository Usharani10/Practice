#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
int number, digit, i, temp, count=0, sum=0, quot=1, divisor;
clrscr();
scanf("%d", &number);
temp=number;
while(temp)
{
	temp=temp/10;
	count++;
}
	printf("No of digits:%d\n", count);
	printf("Enter digit to insert\n");
	scanf("%d", &digit);
       //	printf("%d %d", digit,  number);
	sum=sum+(digit*pow(10,count));
       //	printf("%d", sum);
while(quot)
{        --count;
	divisor=pow(10, count);
       //	printf("%d %d\n",number, divisor);
	quot=number/divisor;
       //	printf("q:%d\n", quot);
	if(divisor>1)
	sum=sum+quot*divisor;
	else
	 {
	sum=sum+number;
	break;
	 }
	number=number%divisor;
}
printf("%d ", sum);
getch();
}









