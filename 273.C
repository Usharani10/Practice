#include<stdio.h>
#include<conio.h>
#include<ctype.h>
char stack[100];
int top=-1;
void push(char);
void pop();
void main()
{
	//char array[20]={"[({hello})]"};
	//char array[20]={"{(hi[hello][hp])}"};
	//char array[80]={"{(Usha) {is} studying in [Nandha [Engg [College]]]}"};
      //char array[80]={"({hello} (usha) {how {are you}})"};

       char array[80]={"(I am {going to} komaralapalayam {to {meet my {grand {parents}}}})"};
    //  char array[90]={"{[Nandha [Engineering college [of Technology]]])}"};
    //char array[50]={"[I (am practicing [{c} programming {language}])]"};
       char temp[30]={'0'}, t1[30]={'0'},eq;
	int len, i, k=0, l=0;
	 int j, s, t;
	clrscr();
	len=strlen(array);

	for(i=0;i<len;i++)
	{
		if(array[i]!='}'&&array[i]!=']'&&array[i]!=')')
		{
			temp[k++]=array[i];
			t1[k-1]=array[i];
		}
		if(array[i]=='}'||array[i]==')'||array[i]==']')
		{
		       //	t1[k]=array[i];
		      // printf("%d", k);
			switch(array[i])
			{
				case '}':
				eq='{';
				break;
				case ')':
				eq='(';
				break;
				case ']':
				eq='[';
				break;
			}
			//if(!isalpha(array[0]&&!isalpha(array[1])))
			  //	j=k;
			//else
			j=k-1;
			printf("%d\n", j);
			while(temp[j]!=eq&&j>0)
			{
			      push(t1[j--]);
			      //printf("%c ", t1[j+1]);
			}
			printf("%d\n", j);
		while(top)
		{
			printf("%c", stack[top]);
			pop();
		}
		temp[j]='*';
		temp[k++]=array[i];
		t1[k-1]=array[i];
		printf("\n");
		}

		//}
	}
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









		      /*	push(temp);
			k=0;
			switch(array[i])
			{
				case '{':
				eq='}';
				break;
				case '(':
				eq=')';
				break;
				case '[':
				eq=']';
				break;
			}
		}
		else if(isalpha(array[i]))
			temp[k++]=array[i];
		else if(array[i]==eq)
		{
			printf("%s\n", temp);
			push(temp);
			for(j=0;j<k;j++)
				temp[i]='0';
			k=0;
			if(top>0)
			{
			temp[k++]=eq;
			push(temp);
			}
		}
		else if(i==len-1) {
		while(top)
		{
			printf("%s\n", stack[top]);
			pop();

			}
		 }


	}
	 //printf("%s", stack[top]);
getch();
}          */
/*void push(char *a)
{
	 strcpy(stack[++top], a);
	// printf("%s\n",stack[top]);

}
void pop()
{
	top--;
} */