#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10], size, i, j, min, temp;
	clrscr();
	scanf("%d", &size);
	for(i=0;i<size;i++)
		scanf("%d", &a[i]);
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(i=0;i<size;i++)
		printf("%d ",a[i]);
getch();
}