#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10], i, size, diff;
	clrscr();
	scanf("%d", &size);
	for(i=0;i<size;i++)
		scanf("%d", &a[i]);
	diff=a[0]-a[1];
	printf("%d\n", diff);
	for(i=1;i<size-1;i++)
	{
		if((a[i]-a[i+1])!=diff)
			printf("%d ",a[i]-diff);
	}
getch();
}


