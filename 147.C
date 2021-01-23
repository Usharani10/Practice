#include<stdio.h>
#include<conio.h>
void main()
{
	char a[20], c;
	int i, j, count=1, max=0;
	clrscr();
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
	if(a[i]!=1) {
		count=1;
		for(j=i+1;a[j]!='\0';j++)
		{
			if(a[i]==a[j])
			{
				count++;
				a[j]=1;

			}
		}
		printf("%c %d\n", a[i], count);

		if(count>max)
		{
			max=count;
			c=a[i];
		}
	}
	}
	printf("%c->%d", c, max);
getch();
}