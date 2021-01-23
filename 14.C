#include<stdio.h>
#include<conio.h>
void main()
{
int n1, n2, choice, t;
clrscr();
scanf("%d %d %d", &n1, &n2, &choice);
switch(choice)
{
case 1:
printf("Swapping without temp");
n1=n1+n2;
n2=n1-n2;
n1=n1-n2;
printf("%d %d",n1, n2);
break;
case 2:
printf("Swapping with temp");
t=n1;
n1=n2;
n2=t;
printf("%d %d",n1, n2);
break;
}
getch();
}
