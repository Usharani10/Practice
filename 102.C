#include<stdio.h>
#include<conio.h>
void main()
{
	int a, b, c, choice;
	clrscr();
	scanf("%d %d", &a, &b);
	do
	{
	scanf("%d", &choice);
	switch(choice)
	{
		case 1:
			c=a+b;
			printf("Addition:%d\n", c);
		break;
		case 2:
			c=a-b;
			printf("Suntraction:%d\n", c);
		break;
		case 3:
			c=a*b;
			printf("Multiplication:%d\n", c);
		break;
		case 4:
			c=a/b;
			printf("Division:%f", (float)c);
		break;
	}
	}while(choice<5);
getch();
}

