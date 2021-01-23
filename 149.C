#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char a[30];
	int input, i, len;
	clrscr();
	gets(a);
	len=strlen(a);
	scanf("%d", &input);
	for(i=len-input;a[i]!='\0';i++)
		printf("%c", a[i]);
	for(i=0;i<len-input;i++)
		printf("%c",a[i]);
getch();
}