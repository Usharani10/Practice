#include<stdio.h>
#include<conio.h>
main()
{
	char a[10], i, len;
	clrscr();
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==a[i+1])
		{
			a[i+1]=1;
		}
	}
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]!=1)
			printf("%c", a[i]);
	}
getch();
}