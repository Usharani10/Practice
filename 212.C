#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char a[27], input[10], letter='a';
	int i, j=0, sum=0, len;
	clrscr();
	a[0]=0;
	for(i=0;i<=26;i++)
		a[i+1]='a'+i;
	gets(input);
	len=strlen(input);
	for(j=0;j<len;j++)
	{
	for(i=1;i<=26;i++)
	{
		if(input[j]==a[i]) {
			sum+=i;
			break;
			}
	}
	}
	printf("%d", sum);
getch();
}
