#include<stdio.h>
#include<conio.h>
void main()
{
	int number, i;
	clrscr();
	scanf("%d", &number);
	if(number<=251)
	{
		for(i=number+1;i<251;i++)
		{
			if(i%3!=0&&i%10!=3)
			{
				printf("%d", i);
				break;
			}
		}
	}
getch();
}