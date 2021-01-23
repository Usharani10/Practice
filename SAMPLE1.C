#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
int number, digit, temp, i, sum=0, quot, rem, count=0, divisor, mul;
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
	sum=sum+digit;
while(1)
{       //++count;
	divisor=pow(10, count-1);
	printf("%d %d\n",number, divisor);
	if(divisor>0){
		quot=number/divisor;
		mul=pow(10, count--);
		printf("q:%d\n", quot);
		sum=sum+quot*mul;
		number=number%divisor;
	 }
	else
	break;

}
printf("%d ", sum);
getch();
}




