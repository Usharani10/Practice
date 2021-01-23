#include<stdio.h>
#include<conio.h>
void main()
{
	char a[40], b[10];
	int i, j=0;
	clrscr();
	gets(a);
	gets(b);
	for(i=0;a[i]!='\0';i++)
	{
		if(b[j]==a[i])
		{
			j++;
			a[i]=1;
		}
	}
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]!=1)
			printf("%c", a[i]);
	}
getch();
}