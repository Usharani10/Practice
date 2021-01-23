#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	char a[20];
	int i, sum=0, k, c=0, count=0, p, t;
	clrscr();
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
		{
		c=1;
		while(1)
		{
			for(k=i+1;a[k]!='\0';k++)
			{
				if(a[k]=='a'||a[k]=='e'||a[k]=='i'||a[k]=='o'||a[k]=='u'){
					count++;
					a[k]='*';
				}
				else
				{
					t=1;
					break;
				}
			}
			if(t==1)
				break;
		 count=0;
		}
		}
	}
	if(c==1)
	printf("%d", count+1);
	else
	printf("%d", count);
getch();
}