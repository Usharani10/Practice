#include<stdio.h>
#include<conio.h>
#include<string.h>
char *stringReduce(char *, int);
void main()
{
	char input[10], *b;
	int len, i=0;
	clrscr();
	gets(input);
      //	for(i=0;i<len;i++)
	//scanf("%c", &input[i]);
       //	printf("%s", input);
	len=strlen(input);
	b=stringReduce(input, len);
	for(i=0;i<len;i++) {
	if(b[i]!='*')
	printf("%c",b[i]);
	}
	getch();
}
char *stringReduce(char *a, int l)
{

	int i, j;
	char b[10];
	for(i=0;i<l;i++)
	{
		for(j=i+1;j<l;j++)
		{
			if(a[i]==a[j]){
				a[j]='*';
				a[i]='*';
				break;
			       //	printf("%c", a[j]);
			}
		}
	}


return a;
}


