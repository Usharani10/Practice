#include<stdio.h>
#include<conio.h>
#include<string.h>
void push(char);
void pop();
char stack[15];
int top=-1;
void main()
{
	char array[20]={"[({hello})]"};
	//char array[50]={"[I (am practicing [{c} programming {language}])]"};
	//char array[20]={"{(hi[hello][hp])}"};
	//char array[80]={"{(Usha) {is} studying in [Nandha [Engg [College]]]}"};
      //char array[80]={"{{hello} (usha) {how {are you}}}"};
       //char array[80]={"(I [am {going to} komarapalayam {to {meet my {grand {parents}}}}])"};
	char c, input, eq, temp[80];
	int i, j, len,l=0, t, start=0, s;
	clrscr();
	scanf("%c", &input);
	len=strlen(array);
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
		if(array[i]!=input)
			continue;
		else
			break;
	}
	for(j=i;j<len;j++)
	{
		if(array[j]==input)
			push(array[j]);
		if(top>=0)
		{
			temp[l++]=array[j];
			if(array[j]==input)
				s=l-1;
		}
		if(array[j]==eq)
		{
			pop();
			for(t=s;t<=l-1;t++)
			{
				if(temp[t]==input)
				{
					for(start=t+1;start<l-1;start++)
						printf("%c", temp[start]);
					printf("\n");
					break;

				}

			}
			/*if(top==0&&array[0]==input)
			s=0;
			else  */
			while(temp[--s]!=input);

		}
	}
getch();
}

void push(char x)
{
	stack[++top]=x;
}
void pop()
{	top--;

}











