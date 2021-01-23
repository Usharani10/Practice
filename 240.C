#include<stdio.h>
#include<conio.h>
#include<string.h>
void push(char);
void pop();
int high(char, char);
char stack[30], res[30];
int top=-1;
void main()
{
	char input[10];
	int i, len, k=0, op;
	clrscr();
	gets(input);
	len=strlen(input);
	for(i=0;i<len;i++)
	{
		if(isalpha(input[i]))
			res[k++]=input[i];
		else
		{
			if(input[i]=='+'||input[i]=='-'||input[i]=='*'||input[i]=='/'||input[i]=='^')
			{
				while(top>-1&&high(stack[top], input[i]))
				{
					res[k++]=stack[top];
					pop();
				}
				push(input[i]);
			}
			else if(input[i]=='('||input[i]=='{'||input[i]=='[')
				push(input[i]);
			else if(input[i]==')'||input[i]=='}'||input[i]==']')
			{
				while(stack[top]!='('&&top>-1)
				{
					res[k++]=stack[top];
					pop();
				}
				pop();
			}
		}
	}
	while(top>-1)
	{
		res[k++]=stack[top];
		pop();
	}
	for(i=0;i<len;i++)
		printf("%c", res[i]);
getch();
}
void push(char x)
{
	stack[++top]=x;
}
void pop()
{
	top--;
}
int high(char t, char i)
{
	switch(t)
	{
		case '*':
		if(i=='+'||i=='-'||i=='/')
			return 1;
		else if(i=='^')
			return 0;
		break;
		case '/':
		if(i=='+'||i=='-'||i=='^'||i=='*')
			return 1;
		else if(i=='^')
			return 0;
		break;
		case '+':
		if(i=='*'||i=='/'||i=='^')
			return 0;
		else if(i=='-')
			return 1;
		break;
		case '-':
		if(i=='*'||i=='/'||i=='^')
			return 0;
		else if(i=='+')
			return 1;
		break;
		case '^':
		if(i=='*'||i=='/'||i=='+'||i=='-')
			return 1;
		default:
			return 0;
		break;
	}
}







