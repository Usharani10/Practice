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
		min=a[i];
		for(j=i+1;j<size;j++)
		{
			if(min>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
				min=a[i];
			}
		}
	}
	for(i=0;i<size;i++)
		printf("%d ", a[i]);
getch();
}
