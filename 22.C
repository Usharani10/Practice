#include<stdio.h>
#include<conio.h>
main()
{
int number, i, fact=1;
clrscr();
scanf("%d", &number);
for(i=1;i<=number;i++)
fact*=i;
printf("%d", fact);
getch();
}

