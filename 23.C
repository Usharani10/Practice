#include<stdio.h>
#include<conio.h>
main()
{
int f0=0, f1=1, f2, range, i;
clrscr();
scanf("%d", &range);
printf("%d %d ", f0, f1);
for(i=0;i<range-2;i++)
{
	f2=f0+f1;
	f0=f1;
	f1=f2;
	printf("%d ", f2);
}
getch();
}
