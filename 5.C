//multiplication using recursion
#include<stdio.h>
#include<conio.h>
int main()
{
int t;
clrscr();
t=multiply(4,5);
printf("%d", t);
getch();
return 0;
}
int multiply(int var1, int var2)
{
if(var2==0)
return 0;
else
{
var1=var1+multiply(var1, var2-1);
//printf("%d\n",var1);
return var1;
}
 }