#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
void push(int);
int pop();
int len;
struct node
{
	char data;
	struct node *next;
}*temp, *top=NULL;
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
			//printf("%d %d ", op2, op1);
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
	printf("%d", top->data);
getch();
}
void push(int x)
{
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=x;
	temp->next=NULL;
	if(top==NULL){
		top=temp;

		}
	else
	{
		temp->next=top;
		top=temp;
	}
}

int pop()
{
       temp=top;
       top=top->next;
       temp->next=NULL;
       return temp->data;
       free(temp);

}
