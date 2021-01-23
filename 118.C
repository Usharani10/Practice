#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10], i, j, k, size, sum=0;
	clrscr();
	scanf("%d", &size);
	for(i=0;i<size;i++)
		scanf("%d", &a[i]);
	scanf("%d",&sum);
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(a[i]+a[j]==sum)
				printf("%d+%d=%d\n", a[i],a[j], sum);

		}
	}
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			for(k=j+1;k<size;k++)
				 if(a[i]+a[j]+a[k]==sum)
					printf("%d+%d+%d=%d\n", a[i], a[j], a[k], sum);
		}
	}
	getch();
	}