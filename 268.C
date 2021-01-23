#include<stdio.h>
#include<conio.h>
void push(char);
int pop();
char stack[50];
int top=-1;
void main()
{
	char string[80]={"{I [am {going to} komarapalayam {to {meet my {grand {parents}}}}]}"};
	char input, eq, res[50];
	int i,j, k=0,  len, temp;
	len=strlen(string);
	clrscr();
	//gets(string);
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
		if(string[j]==input)
		{
			push(string[j]);
			temp=j;
		}
		if(top>=0)
			res[k++]=string[j];
		if(string[j]==eq)
		{
			pop();
			for(i=temp;res[i]!=eq;i++)
		       {
			if(res[i]!=input&&res[i]!=eq)
			printf("%c", res[i]);
			else
			printf("\n");
		      }
		}


	       //	if(top>0)
		//{

		//}
	}
	printf("\n");
	for(i=1;i<k;i++)
	{
		printf("%c", res[i]);
	}
getch();
}

void push(char x)
{
	stack[++top]=x;
}
int pop()
{
	return stack[top--];
}
