#include<stdio.h>
#include<conio.h>
void main()
{
	char a[10],  b[10];
	int i, j, count=0;
	clrscr();
	gets(a);
	gets(b);
	for(i=0;a[i]!='\0';i++)
	{
		for(j=i+1;a[j]!='\0';j++)
		{
			if(a[i]==a[j])
				a[j]=1;
		}

	}
	for(i=0;a[i]!='\0';i++)
	{       count=0;
		for(j=0;b[j]!='\0';j++)
		{
			if(a[i]==b[j]) {
				count++;
				b[j]=1;
				}
		}
		if(a[i]!=1)
		printf("%c->%d\n",a[i],count);
	}
getch();
}