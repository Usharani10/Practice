#include<stdio.h>
#include<conio.h>
void main()
{
	char s[20];
	int ans[10], i, tc,  k=0, l;
	clrscr();
	scanf("%d", &tc);
	for(i=0;i<tc;i++)
	{
		scanf("%s", s);
		ans[k++]=check(s);
	}
	for(i=0;i<k;i++)
		printf("%d ", ans[i]);
getch();
}
int check(char *s)
{
	int len, count, i, j;
	len=strlen(s);
	count=0;
	for(i=0;i<len;i++)
	{
	       //	j=i+1;
		if(s[i]!=0&&s[i+1]!=0)
		{
		for(j=i+1;j<len;j++)
		{
			if(s[i]==s[j])
			{
				count++;
				s[j]=0;
			}
			else
			break;
	       }
	       }
	}
return count;
}




