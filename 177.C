#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10], b[10], size, i, j, temp;
	clrscr();
	scanf("%d", &size);
	for(i=0;i<size;i++)
		scanf("%d", &a[i]);
	for(i=0;i<size;i++)
	{
		if(i!=a[i])
		{
			a[i]=0;
					}
	}
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<size;i++)
	{
		printf("%d " ,a[i]);
	}
getch();
}


