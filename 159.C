#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c, sum=0;
	clrscr();
	scanf("%d %d %d", &a, &b, &c);
	sum=a+b+c;
	if(sum>=100&&sum<=200)
		printf("In given range");
	else
		printf("Not in goven range");
getch();
}
