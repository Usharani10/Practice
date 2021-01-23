#include<stdio.h>
#include<conio.h>
#include<limits.h>
void main()
{
	int a;
	clrscr();
	scanf("%d", &a);
       //	printf("%d %d", INT_MIN, INT_MAX); when range exceeds it
       //becomes indefinite loop. the value of -32768 is assigned
       //to the next value of 32768
	if((a>=-32768)&&(a<=32767))
		printf("%d, In Given Range", a);
	else
		printf("Not in given range\n");
getch();
}


