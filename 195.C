#include<stdio.h>
#include<conio.h>
#include<string.h>
long int countways(char *, int);
void main()
{
	char number[10];
	int i, len;
	long int ans;
	clrscr();
	gets(number);
	len=strlen(number);
	ans=countways(number,len);
	printf("%d", ans);
	getch();
}
long int countways(char *number, int l)
{
	int no_of_ways[5], i, p, q;
	//size=l+1;
	no_of_ways[0]=1;
	no_of_ways[1]=1;
	for(i=0;i<=l;i++)
	{
		q=number[i]-48;
		p=number[i-1]-48;
		if(q>=0&&q<=26)
			no_of_ways[i+1]=no_of_ways[i];
		if(q+(p*10)<=26&&q+(p*10)>0)
			no_of_ways[i+1]=no_of_ways[i+1]+no_of_ways[i-1];

	}
	return no_of_ways[l];
}


