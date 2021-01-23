#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10], i, j, size, max=0, t;
	clrscr();
	scanf("%d", &size);
	for(i=0;i<size;i++)
		scanf("%d", &a[i]);
	max=size;
	for(j=0;j<size;j++)
	{
		for(i=0;i<max;i++)
		{
			if(a[i]>a[i+1])
			{
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
		}
		max--;
	       //	printf("%d\n ", max);
	}
	for(i=0;i<size;i++)
		printf("%d ", a[i]);
getch();
}