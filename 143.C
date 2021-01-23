#include<stdio.h>
#include<conio.h>
void main()
{
	char a[10], i, count=0, j;
	clrscr();
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		count=0;
		for(j=i+1;a[j]!='\0';j++)
		{
			if(a[i]==a[j])
			{
				count++;
				a[i]=1;
			}
		}
		if(count>0)
		printf("%c%d", a[j], count);
		else
		printf("%c", a[i]);
	}
getch();
}