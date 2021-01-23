#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char a[27], b[27], input[10], letter='a';
	int i, j=0, sum=0, len, k=0, ans[20];
	clrscr();
	a[0]=0;b[0]=0;
	for(i=0;i<=26;i++)
		a[i+1]='a'+i;
	for(i=0;i<=26;i++)
		b[i+1]='A'+i;
	gets(input);
	len=strlen(input);
	for(i=0;i<len;i++)
	{
		for(j=1;j<=27;j++)
		{
			if(input[i]==a[j]||input[i]==b[j]){
				ans[k++]=j;
				break;}
			if(input[i]==' ') {
				ans[k++]='$';
				break;
				}
		}
	}
	for(i=0;i<k;i++)
	{
		if(ans[i]=='$')
		printf("%c", ans[i]);
		else
		printf("%d", ans[i]);
	}
getch();
}