#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
int number, digit, temp, i, sum=0, quot, rem, count=0, divisor, mul, after;
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
	printf("Enter the number after to insert\n");
	scanf("%d", &after);
	count=count+1;
while(1)
{
	divisor=pow(10, count-2);
	printf("%d %d\n",number, divisor);
	if(divisor>0){
		quot=number/divisor;
		if(quot!=after)
		{
		mul=pow(10, count--);
		printf("q:%d\n", quot);
		sum=sum+quot*mul;
		printf("s:%d\n", sum);
		if(quot==after){
		//mul=pow(10, count--);
		printf("q:%d\n", quot);
	       //	sum=sum+quot*mul;
		sum=sum+digit*(pow(10,count--));
		printf("s1:%d\n",sum);
		}
		}
		number=number%divisor;
	 }
	 else
	 break;

}
printf("%d ", sum);
getch();
}




