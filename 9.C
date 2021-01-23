#include<stdio.h>
#include<conio.h>
/*main()
{
int number;
clrscr();
scanf("%d", &number);
if(number%2==0)
printf("%d is even", number);
else
printf("%d is odd", number);
getch();
}*/
//without % operater
main()
{
int number;
clrscr();
scanf("%d", &number);
if(number/2*2==number)
printf("%d is even", number);
else
printf("%d is odd", number);
getch();
}

