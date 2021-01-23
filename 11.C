#include<stdio.h>
#include<conio.h>
int main()
{
int no, t;
clrscr();
scanf("%d", &no);
t=sum_of_digits(no);
printf("%d",t);
getch();
return 0;
}
int sum_of_digits(int number)
{
int sum=0, remainder;
while(number)
{
remainder=number%10;
sum=sum+remainder;
number=number/10;
}
//s=sum;
/*for(i=0;sum>0;i++)
{
remainder=sum%10;
count++;
sum=sum/10;
}   */
if(sum>9)
return sum_of_digits(sum);
else
return sum;
//printf("%d", sum);
getch();
}
