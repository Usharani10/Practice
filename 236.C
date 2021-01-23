#include<stdio.h>
#include<conio.h>
#include<string.h>
void push(char);
int pop();
void display();
struct node
{
	char data;
	struct node *next;
}*temp, *first, *top=NULL;
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
	if(top==NULL&&flag!=1)
		printf("Balanced\n");
	else
		printf("Not balanced\n");
getch();
}
void push(char a)
{
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=a;
	temp->next=NULL;
	if(top==NULL)
	{
		top=temp;
		first=top;
	}
	else
	{
		top->next=temp;
		top=top->next;
	}
//return 0;
}
int pop()
{
	temp=top;
       top=top->next;
       return(temp->data);
       free(temp);

 //return 0;
}



