#include<stdio.h>
#include<conio.h>
void main()
{
	int number1, number2;
	clrscr();
	scanf("%d %d", &number1, &number2);
	add(number1, number2);
	sub(number1, number2);
getch();
}
int add(int x, int y)
{
	int c;
	while(y!=0)
	{
		c=x&y;
		x=x^y;
		y=c<<1;
	}
	printf("%d\n", x);

}
int sub(int x, int y)
{
	int c;
      //	y=add(~y, 1);
       /*	while(y!=0)
	{
		c=x&y;
		x=x^y;
		y=c<<1;
	} */
	y=~y+1;
	printf("%d\n", x+y);
}




