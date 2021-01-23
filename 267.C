#include<stdio.h>
#include<conio.h>
#include<string.h>
void push(char);
void pop(char);
char stack[50];
int top=-1, temp=0;
void main()
{
	char string[50]={"{hello{how are you}(usha)}"}, input, eq;
	int i, len, j;
	clrscr();
	len=strlen(string);
	scanf("%c", &input);
	switch(input)
	{
		case '(':
			eq=')';
		break;
		case '[':
			eq=']';
		break;
		case '{':
			eq='}';
		break;
	}
	for(i=0;i<len;i++)
	{
		if(string[i]!=input)
			continue;
		else
			break;
	}
	for(j=i;j<len;j++)
	{
		if(string[j]!=eq)
			push(string[j]);
		else if(string[j]==eq)
		{
			pop(input);
			if(top==0)
			break;
			else
			push(string[j]);
		}
	}
	for(i=1;i<=top;i++)
		printf("%c", stack[i]);
getch();
}
void push(char x)
{
	stack[++top]=x;
}
void pop(char x)
{
	int t, i;
	t=top;
	while(top)
	{
		if(stack[top--]==x)
		{
		       break;
		}
	}
	if(top>0&&temp==0)
	{
		for(i=top+2;i<=t;i++)
			printf("%c", stack[i]);
		printf("\n");
		temp=1;
	}
	if(top>0)
	top=t;
	if(top==0)
	{
		for(i=top+1;i<=t;i++)
			printf("%c", stack[i]);
	}
}





