#include<stdio.h>
#include<conio.h>
void main()
{
	 char a[10];
	 int input, i;
	 clrscr();
	 gets(a);
	 scanf("%d", &input);
	 for(i=0;a[i]!='\0';i++)
	 {
		printf("%c", a[i]+input);
	 }
getch();
}