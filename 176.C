#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10], b[10], size, i, j, temp=0, c, k;
	clrscr();
	scanf("%d", &size);
	for(i=0;i<size;i++)
		scanf("%d", &a[i]);
	for(i=0;i<size;i++)
	{       c=0;temp=0;
		for(j=i+1;j<size;j++)
		{
			if(a[i]==a[j]&&a[j]!='*')
			{
				b[c++]=j;
				a[j]='*';
				temp=1;
			}
		}
		if(temp==1)
		{
		printf("%d-%d ", a[i], i);
		for(k=0;k<=c-1;k++)
		printf("%d ", b[k]);
		printf("\n");
		}

	}
getch();
}