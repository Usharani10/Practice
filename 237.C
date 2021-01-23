#include<stdio.h>
#include<conio.h>
#include<string.h>
#define size 4
void push(char);
int pop();
void display();
int top=-1;
char stack[size];
void main()
{
	char input[30], last;
	int i, len, flag=0;
	clrscr();
	gets(input);
	len=strlen(input);
	for(i=0;i<len;i++)
	{
		if(input[i]=='('||input[i]=='{'||input[i]=='[')
			push(input[i]);
		else
		{
			switch(input[i])
			{
				case ')':
				last=pop();
			      //	printf("%c", last);
				if(last=='['||last=='{')
				      flag=1;
				break;
				case '}':
				last=pop();
				if(last=='['||last=='(')
					flag=1;
				break;
				case ']':
				last=pop();
				if(last=='('||last=='{')
					flag=1;
				break;
			    }
		}
	}
	if(top==-1&&flag!=1)
		printf("Balanced\n");
	else
		printf("Not balanced\n");
getch();
}
void push(char a)
{
	if(top==-1)
	{
	top=top+1;
	stack[top]=a;
	}
	else
	{
	stack[++top]=a;
	}
//return 0;
}
int pop()
{
	char p;
	p=stack[top];
	top--;
	return p;

 //return 0;
}



