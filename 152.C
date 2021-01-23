#include<stdio.h>
#include<conio.h>
struct pop
{
	int number;
}s1,s2,s3,s4,s5;
void main()
{
	int a, b, c;
	clrscr();
	scanf("%d",&s1.number);
	scanf("%d", &s2.number);
	scanf("%d",&s3.number);
	scanf("%d", &s4.number);
	scanf("%d", &s5.number);
	a=(s1.number>s2.number)?s1.number:s2.number;
	b=(s3.number>s4.number)?s3.number:s4.number;
	c=s5.number;
	printf("%d %d %d\n", a, b, c);
	if(a>b)
	{
		if(a>c)
			printf("%d is greater\n", a);
		else
			printf("%d is greater\n", c);
	}
	else
	{
		if(b>c)
			printf("%d is greater\n", b);
		else
			printf("%d is greater\n", c);
	}
getch();
}

