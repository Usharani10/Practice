#include<stdio.h>
#include<conio.h>
void find(char *);
void add(char *);
char a[10][10];
int i=0;
void main()
{
     //  char input[5][5]={"abi", "anu", "hack"};
	clrscr();
      //	add("abi");
      //	add("anu");
      //	add("fa");
	add("hack");
      //add("hacker");
	find("hac");
	find("hak");
getch();
}
void add(char *input)
{
	int  j;
	for(j=0;j<3;j++)
		a[i][j]=input[j];
      //	printf("%s", a);
	i++;
}
void find(char *input)
{
	int k, j, count=0;
	for(k=0;k<i;k++)
	{
		count=0;
		for(j=0;j<4;j++)
		{
			if(a[k][j]==input[j])
			{
				count++;
				//break;
			}
			else
			break;

		}
	if(count==j-1)
	printf("%d ", count);
	else
	printf("0");
	}
}





