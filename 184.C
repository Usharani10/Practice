#include<stdio.h>
#include<conio.h>
#include<string.h>
#define len 5
void main()
{
	char a[10], letter;
	int i,j, k=0, count=0;
	clrscr();
	gets(a);
	for(i=0, j=len-1;i<len&&j>=0;i++, j--)
	{
		if(count<=1)
		{
		if(a[i]!=a[j])
		{
			letter=a[i];
			a[i]=0;
			k=remove(a);
			if(k==1)
			{
				for(k=0;k<len-2;k++)
				{
					if(a[k]!=0)
						printf("%c", a[k]);
				}
			      break;
			}
			else
			{
				a[i]=letter;
				a[j]=0;
				k=remove(a);
				if(k==1)
				{
					for(k=0;k<len-2;k++)
					{
						if(a[k]!=0)
							printf("%c", a[k]);
					}
				break;
				}
				count++;
			}
		}
		}
	}
 getch();
}
int remove(int a[len])
{
	int i, j, rev[10], k=0, count=0;
	for(i=len-1;i>=0;i--)
		rev[k++]=a[i];
	for(i=0;i<len;i++)
	{
		if(a[i]==rev[i])
			count++;
	}
	if(count==1)
		return 1;
	else
		return 0;
}