#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
void push(int);
int pop();
char a[10];
int top=-1, len;
void main()
{
	char input[10];
	int op1, op2;
	int  i, ans;
	clrscr();
	gets(input);
	len=strlen(input);
	for(i=0;i<len;i++)
	{
		if(isdigit(input[i]))
			push(input[i]-'0');
		else
		{
			op2=pop();
			op1=pop();
			//printf("%c %c ", op1, op2);
			switch(input[i])
			{
			case '+':
			push(op1+op2);
			break;
			case '-':
			push(op1-op2);
			break;
			case '*':
			push(op1*op2);
			break;
			case '/':
			push(op1/op2);
			break;
			}
		}
	}

       //	for(i=0;i<=top;i++)
	printf("%d", a[top]);
getch();
}
void push(int x)
{
	a[++top]=x;
	//printf("%s", a[top]);
}
int pop()
{
       //	printf("%d", a[top]);
	return (a[top--]);

}
