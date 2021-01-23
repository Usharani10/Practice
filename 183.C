#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char a[10], rev[10];
	int i,j, k=0, len=0, count=0;
	clrscr();
	gets(a);
	len=strlen(a);
	while(1)
	{
		k=0;count=0;
		for(j=len-1;j>=0;j--)
			rev[k++]=a[j];
		for(i=0;i<len;i++)
		{
			if(a[i]==rev[i])
				count++;
		}
		if(count==len)
		{
			printf("\nPalindrome:%s\n", a);
			break;
		}
		else
		{
			printf("%c ", a[len-1]);
			a[len-1]=0;
			len--;
		}

	}


getch();
}


