#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,  f1=0, f2=1, f3, size;
	clrscr();
	scanf("%d", &size);
	a[0]=0;
	for(i=1;i<size;i++)
	{
		f3=f1+f2;
		f1=f2;
		f2=f3;
		a[i]=f3;
	}
	for(i=size-1;i>=0;i--)
		printf("%d ",a[i]);
getch();
}

