#include<stdio.h>
#include<conio.h>
main()
{
int range, start;
clrscr();
scanf("%d", &range);
for(start=1;start<=range;start++)
printf("square of %d:%d\n",start,start*start);
getch();
}