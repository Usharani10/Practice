#include<stdio.h>
#include<conio.h>
void main()
{	int a[10], size, i, j, min, temp;
	clrscr();
	scanf("%d", &size);
	for(i=0;i<size;i++)
		scanf("%d", &a[i]);
	for(i=0;i<size;i++)
	{
		j=i;
		temp=a[i+1];
		while(temp<a[j]&&j>=0)
		{
		a[j+1]=a[j];
		j--;
		}
		a[j+1]=temp;
	}
	for(i=0;i<size;i++)
		printf("%d ", a[i]);
getch();
}
