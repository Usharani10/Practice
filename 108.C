#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	char a[20], b[20];
	int i, j=0, len1=0, len2=0, index=0;
	clrscr();
	gets(a);
	gets(b);
	len1=strlen(a);
	len2=strlen(b);
	if(len1==len2)
	{
		for(i=len1;b[j]!='\0';i++, j++)
		{
			a[i]=b[j];
		}
	}
	else
	{
		if(len1>len2)
		{
			for(i=len2;b[j]!='\0';i++, j++)
				a[i]=b[j];
		}
		else
		{
			for(i=len1;a[j]!='\0';i++, j++)
				b[i]=a[j];
		}


	}
	if(len1==len2||len1>len2)
	{
		for(index=0;index<i;index++)
		printf("%c",a[index]);
	}
	else
	{
		for(index=0;index<i;index++)
		printf("%c",b[index]);
	}
	getch();
}