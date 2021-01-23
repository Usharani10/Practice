#include<stdio.h>
#include<conio.h>
void push(char);
void pop();
char stack[50];
int top=-1;
void main()
{
	char string[50]={"{hello(usha)[how{are you}]}"}, input, j, eq;
	int i, len, temp;
	len=strlen(string);
	clrscr();
       //	gets(string);
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
		else
		{
			pop(input);
			if(top==0)
			break;
			else
			push(eq);
		}
	}
	    for(i=1;i<top;i++)
		printf("%c", stack[i]);

getch();
}

void push(char x)
{
	stack[++top]=x;
}
void pop(char x)
{
	int i, t;
	t=top;
	while(top--)
	{
		if(stack[top]==x&&top==0) {
		for(i=1;i<=t;i++)
			printf("%c", stack[i]);
		}
		if(stack[top]==x&&top!=0)
		{
		     for(i=top+1;i<=t;i++)
			printf("%c", stack[i]);
			printf("\n");
			top=t;
		break;
		}

	}


}
