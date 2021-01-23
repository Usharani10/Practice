#include<stdio.h>
#include<conio.h>
void main()
{
int num1, num2, choice, lcm, i, gcd;
scanf("%d", &choice);
scanf("%d %d", &num1, &num2);
switch(choice)
{
case 1:
printf("\n LCM of 2 numbers\n");
lcm=num1>num2?num1:num2;
while(1){
	if(lcm%num1==0&&lcm%num2==0){
	printf("%d\n", lcm);
	break;
	}
lcm++;
}
break;
case 2:
printf("\nGCD of 2  numbers\n");
for(i=2;i<=num1&&i<=num2;i++)
{
	if(num1%i==0&&num2%i==0)
	gcd=i;
}
printf("%d", gcd);
break;
}
getch();
}











/*void main()
{
int num1, num2, mul=1, i, j=2;
clrscr();
scanf("%d %d", &num1, &num2);
while(num1>1&&num2>1)
{
	if(num1>num2)i=num2;
	else i=num1;
	if(num1%i==0&&num2%i==0)
	{
	num1/=i;
	num2/=i;
	mul*=i;
	i--;
	}
	else
	{
		if(num1%j==0&&num2%j==0){
		num1/=j;
		num2/=j;
		mul*=j;
		j++;
		}
		else {
		mul*=num1*num2;
		break;
		}
	}
}
	if(num1==1||num2==1)
	{
	mul*=num1*num2;
	}
printf("%d", mul);
getch();
}  */




