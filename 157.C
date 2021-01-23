#include<stdio.h>
#include<conio.h>
void main()
{
	int unit;
	clrscr();
	scanf("%d", &unit);
	if(unit<100)
		printf("%.2f", unit*1.50);
	else if(unit>=100&&unit<=200)
		printf("%.2f", unit*2.50);
	else if(unit>=200&&unit<=500)
		printf("%.2f", unit*3.50);
	else
		printf("Exceeds specified range\n");
getch();
}