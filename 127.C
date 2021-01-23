#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int number, sqrt;
	clrscr();
	scanf("%d", &number);
	sqrt=pow(number, 1.0/2.0);
       //	sqrt++;
	printf("%d", sqrt);
getch();
}
