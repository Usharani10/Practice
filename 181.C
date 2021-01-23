#include<stdio.h>
#include<conio.h>
void main()
{
	char a[40];
	int i,j;
	clrscr();
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		for(j=i+1;a[j]!='\0';j++)
		{
			if(a[i]==' ')
			       continue;
			else if(a[i]==a[j])
				a[j]=1;
		}
	}
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]!=1)
		a[i]=a[i];//printf("%c", a[i]);
	}
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==' '&&a[i+1]>=97)
			a[i+1]=a[i+1]-32;
		if(a[0]>=97&&a[i]!=1)
			a[0]=a[0]-32;

	}
	//for(i=0;a[i]!='\0';i++)
	//fkdsprintf("%c", a[i]);

	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]!=1)
		printf("%c", a[i]);
	}
getch();
}

