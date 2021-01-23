#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char a[20], b[20];
	int i, j, k=0, len1, len2, c[10], count=1;
	clrscr();
	gets(a);
	gets(b);
	len1=strlen(a);
	len2=strlen(b);
	if(len1==len2)
	{
		for(i=0;i<len1;i++)
		{
			count=0;
			for(j=i+1;j<len1;j++)
			{
				if(a[i]==a[j])
					count++;

			}
			if(count>0)
				c[k++]=count;
		}
		for(i=0;i<len2;i++)
		{
			count=0;
			for(j=i+1;j<len2;j++)
			{
				if(b[i]==b[j])
					count++;
			}
			if(count>0)
				c[k++]=count;
		}
		count=1;
		for(i=0;i<k;i++)
		{
			for(j=i+1;j<k;j++)
			{
				if(c[i]==c[j])
					count++;
			}
		}
		if(count==k)
		printf("isomorphic\n");
		else
		printf("Not isomorphic\n");


	}
	else
	printf("Strings are not equal\n");
getch();
}
