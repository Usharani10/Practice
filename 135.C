#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10], b[10],size1, size2, i, j, flag;
	clrscr();
	scanf("%d %d", &size1, &size2);
	for(i=0;i<size1;i++)
		scanf("%d", &a[i]);
	for(j=0;j<size2;j++)
		scanf("%d", &b[j]);
	for(i=0;i<size1;i++)
	{
		flag=0;
		for(j=0;j<size2;j++)
		{
			if(a[i]==b[j])
				flag=1;
		}
		if(flag==1)
			a[i]=0;
	}
	for(i=0;i<size1;i++)
		if(a[i]!=0)
		printf("%d", a[i]);
getch();
}

