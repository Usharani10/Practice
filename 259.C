#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10], i, j, size, mid, temp;
	clrscr();
	scanf("%d", &size);
	for(i=0;i<size;i++)
		scanf("%d", &a[i]);
	mid=size/2;
	for(i=0;i<mid-1;i++)
	{
		for(j=i+1;j<mid;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=mid;i<size-1;i++)
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
		printf("%d ", a[i]);
getch();
}
