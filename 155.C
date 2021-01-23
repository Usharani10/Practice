#include<stdio.h>
#include<conio.h>
void main()
{
	int *p;
	int n,i;
	clrscr();
	scanf("%d", &n);
	p=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
		p[i]=i+1;
	for(i=0;i<n;i++)
		printf("%d ", p[i]);
getch();
}