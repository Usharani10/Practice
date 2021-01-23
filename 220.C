#include<stdio.h>
#include<conio.h>
void main()
{
	char a[5][5]={"i", "like", "mango", "man", "go"},  b[10];
	int i=0, j=0, k=0, temp=0, t;
	clrscr();
	gets(b);
	//printf("%c", a[2][1]);
	for(i=0;i<5;i++)
	{    	 t=0;temp=0;
	      for(j=k;b[j]!='\0';j++)
	      {
			if(b[j]==a[i][0])
			{
				for(k=j;b[k]!='\0';k++)
				{
					if(b[k]==a[i][temp++])
					{
						printf("%c", b[k]);
					}
					else
					{
					t=1;
					break; }
				}
			}
			else
				a[i][0]='*';
			if(t==1)
			break;

	      }
	      printf(" ");
	}
getch();
}

