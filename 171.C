#include<stdio.h>
#include<conio.h>
void main()
{
	char a[10], b[10], i, j=0;
	clrscr();
	gets(a);
	gets(b);
       //	for(i=0;a[i]!='\0';i++, len++);
	for(i=0;a[i]!='\0';i++)
	{
		for(j=0;a[j]!='\0';j++)
		{
			if(b[j]-a[i]==1)
				printf("Diff between %c & %c is 1\n", b[j], a[i]);

		}
	}

getch();
}