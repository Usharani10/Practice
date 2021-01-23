#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char a[10], b[20];
	int tc, t, i, k=0, len;
	clrscr();
	scanf("%d", &tc);
	for(t=0;t<tc;t++)
	{
		scanf("%s", a);
		len=strlen(a);
		for(i=0;i<len;i=i+2)
			b[k++]=a[i];
			b[k++]=' ';
		for(i=1;i<len;i=i+2)
			b[k++]=a[i];
			b[k++]='*';
	}
	for(i=0;i<k;i++)
	{
		if(b[i]=='*')
			printf("\n");
		else
			printf("%c", b[i]);
	}

getch();
}