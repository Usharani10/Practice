#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int a[10], b[10], i, j, l1, l2, count=1;
	clrscr();
	gets(a);
	gets(b);
	l1=strlen(a);
	l2=strlen(b);
	for(i=0;i<l1;i++)
	{
		for(j=0;j<l2;j++)
		{
			if(a[i]==b[j])
			{
				a[i]=0;
				b[j]=0;
				count++;
				break;

			}
		}
	}
	if(count!=l1-1 && count!=l2-1)
		printf("%d ", ((l1-count)+(l2-count)));
	else
		printf("0");
getch();
}