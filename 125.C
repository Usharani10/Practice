#include<conio.h>
#include<string.h>
#include<stdio.h>
void main()
{
	char a[20], b[20];
	int i, j, len, count=0;
	clrscr();
	gets(a);
	len=strlen(a);
	//printf("%d", len);
	for(i=0;i<len;i++)
	{
		switch(a[i])
		{
			case '(':
				b[i]=')';
			break;
			case '{':
				b[i]='}';
			break;
			case '[':
				b[i]=']';
			break;
			case ')':
				b[i]='(';
			break;
			case '}':
				b[i]='{';
			break;
			case ']':
				b[i]='[';
			break;
		}
	}
	for(i=0;i<len;i++)
	{
		for(j=0;j<len;j++)
		{
			if(b[i]==a[j]) {
				count++;
				a[j]=1;
				}
			if(count==len)
				break;
		}
	}
	printf("%d",count);
	if(count==len)
		printf("Balanced\n");
	else
		printf("Unbalanced\n");
getch();
}