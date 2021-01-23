#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10], i, size, j, temp, t;
	clrscr();
	scanf("%d", &size);
	for(i=0;i<size;i++)
		scanf("%d", &a[i]);
	for(i=0;i<size;i++)
	{
		t=0;
		for(j=i+1;j<size;j++)
		{
			if(a[i]==a[j])
			{
				t=1;
				a[j]=0;
			}
		}
		if(t==1)
		a[i]=0;
	}
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<size;i++)
	{
		if(a[i]!=0)
			printf("%d ", a[i]);
	}
getch();
}
