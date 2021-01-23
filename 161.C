#include<stdio.h>
#include<conio.h>
void main()
{
	char a[30], i, j, len;
	clrscr();
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==' '&&(a[i+1]>=65&&a[i+1]<=90)&&(a[i+2]>=97&&a[i+2]<=122))
		{
			for(j=i+1;a[j]!='\0';j++)
			{
				if(a[j]==' ')
				break;
				else
				printf("%c", a[j]);
			}
		}
		if(i==0)
		{
			if((a[i]>=65&&a[i]<=90)&&(a[i+1]>=97&&a[i+1]<=122))
			{
			for(j=0;a[j]!='\0';j++)
			{
				if(a[j]==' ')
				break;
				else
				printf("%c", a[j]);
			}
			}
		}

	}
getch();
}

