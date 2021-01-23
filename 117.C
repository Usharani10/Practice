#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char a[10];
	int v[10], i, k, len;
	clrscr();
	gets(a);
	len=strlen(a);
	for(i=0;i<len;i++)
	{
		if(a[i]=='I') a[i]=1;
		else if(a[i]=='V') a[i]=5;
		else if(a[i]=='X') a[i]=10;
		else if(a[i]=='L') a[i]=50;
		else if(a[i]=='C') a[i]=100;
		else if(a[i]=='D') a[i]=500;
		else if(a[i]=='M') a[i]=1000;
		else
		a[i]=0;
		/*	switch(a[i])
		{
			case 'I':
				a[i]=1;
			break;
			case 'V':
				a[i]=5;
			break;
			case 'X':
				a[i]=10;
			break;
			case 'L':
				a[i]=50;
			break;
			case 'C':
				a[i]=100;
			break;
			case 'D':
				a[i]=500;
			break;
			case 'M':
				a[i]=1000;
			break;
			default:
			continue;//printf("Invalid character\n");

		}  */
	}
	k=a[len-1];
	if(k>0){
	for(i=len-1;i>=0;i--)
	{
		if(a[i]>a[i-1])
			k-=a[i-1];
		if(a[i]<=a[i-1])
			k+=a[i-1];
	}

	if(k>30&&k!=a[len-1])
	{
		for(i=0;i<k;i++)
			printf("%d\n", k);
	}
	else if(k!=a[len-1]&&k>0)
		printf("%d\n", k);
	}
	else
	printf("Invalid");

getch();
}