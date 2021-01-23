#include<stdio.h>
#include<conio.h>
main()
{
	char a[20];
	int i;
	clrscr();
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>=65&&a[i]<=90 || a[i]>=97&&a[i]<=122)
			printf("%c", a[i]);
	}
	getch();
}