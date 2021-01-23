#include<stdio.h>
#include<conio.h>
//#include<math.h>
/*main()
{
int number=123, reverse=0;
while(number)
{
int remainder=number%10;
reverse=remainder+(reverse*10);
number=number/10;
}
printf("%d", reverse);
getch();
}   */
int main()
{
long int number, no_of_digit=0, i, remainder, reverse=0, sum=0;
int t;
clrscr();
scanf("%ld",&number);
t=number;
for(i=0;t>0;i++) {
no_of_digit++;
t=t/10;
}
while(number)
{
remainder=number%10;
reverse=pow(10,no_of_digit-1);
sum=sum+(reverse*remainder);
number=number/10;
no_of_digit--;
}
printf("%ld\n", sum);
getch();
return 0;
}
int pow(int ten, int count)
{
int i, ans=1;
for(i=0;i<count;i++)
{
ans=ans*ten;
}
printf("\n%d\n", ans);
return ans;
}

