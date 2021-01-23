#include<stdio.h>
#include<conio.h>
void main()
{
	int size, a[10], i, j, time_rotate, temp;
	clrscr();
	scanf("%d %d", &size, &time_rotate);
	for(i=0;i<size;i++)
		scanf("%d", &a[i]);
	for(i=0;i<time_rotate;i++)
	{
		temp=a[0];
		for(j=0;j<size;j++)
			a[j]=a[j+1];
		a[j-1]=temp;
	}
	for(i=0;i<size;i++)
		printf("%d ", a[i]);
getch();
}


