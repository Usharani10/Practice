#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10], i, j, size, temp;
	clrscr();
	scanf("%d", &size);
	for(i=0;i<size;i++)
		scanf("%d", &a[i]);
	if(size%2==0)
		temp=size;
	else
		temp=size-1;
	for(i=0;i<temp;i++)
	{
		if(i%2==0)
		{
			j=a[i];
			a[i]=a[i+1];
			a[i+1]=j;
		}
	}

	for(i=0;i<size;i++)
		printf("%d ", a[i]);

getch();
}