#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	char a[10], rev[10], i, j=0, len, count=0;;
	clrscr();
	gets(a);
	len=strlen(a);
	for(i=len-1;i>=0;i--, j++)
		rev[j]=a[i];
	for(i=0;i<len;i++)
	{
		if(a[i]==rev[i])
			count++;
	}
	if(count==len)
		printf("Palindrome\n");
	else
		printf("Not a Palindrome");
getch();
}