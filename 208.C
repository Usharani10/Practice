#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	char a[20];
	int i, sum=0, k, c, count=0, p, t;
	clrscr();
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]!='*'&&a[i]>=48&&a[i]<=57&&a[i+1]>=97&&a[i+1]<=122)
		{
			sum=sum+a[i]-48;
		}
		if(a[i]>=48&&a[i]<=57)
		{
		while(1)
		{
			for(k=i+1;a[k]!='\0';k++)
			{
				if(a[k]>=48&&a[k]<=57){
					count++;
				}
				else
				{
					t=1;
					break;
				}
			}
			if(t==1)
			{
			t=i;
			break;
			}
		}
		}
		if(count>0){
		c=count;
		for(k=0;k<=count;k++)
		{
			p=pow(10, c--);
			printf("%d ", p);
			sum=sum+(a[t]-48)*p;
			a[t++]='*';
		}
		}
		count=0;
	}
	printf("%d", sum);
getch();
}