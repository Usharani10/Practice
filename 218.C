#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int a=2, b;
	double c=2.5, d;
	char s[20]="Hackerrank", s1[20];
	clrscr();
	gets(s1);
	scanf("%d %lf", &b, &d);
       //	scanf("%[^\n]", s1);
	printf("%d\n", a+b);
	printf("%lf\n", c+d);
	printf("%s\n", strcat(s, s1));
getch();
}

