#include<stdio.h>
#include<conio.h>
void main()
{
	int num1, num2, num3, mul=0, mul1=0, i, ans;
	clrscr();
	scanf("%d %d %d", &num1, &num2, &num3);
	for(i=1;i<=num1;i++)
		mul=mul+num2;
	printf("%d ", mul);
	for(i=1;i<=num3;i++)
		mul1=mul1+mul;
	//ans=mul+mul1;
	printf("%d", mul1);
	getch();
}
