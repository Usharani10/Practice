#include<stdio.h>
#include<conio.h>
void main()
{
	int fahrenheit, celcius;
	clrscr();
	scanf("%d", &fahrenheit);
	celcius=(fahrenheit-32)*5/9;
	printf("%d\n", celcius);
	scanf("%d", &celcius);
	fahrenheit=celcius*9/5+32;
	printf("%d", fahrenheit);
getch();
}