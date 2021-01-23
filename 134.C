#include<stdio.h>
#include<conio.h>
#include<limits.h>
void main()
{
	int a[10], i, max=0, min, size, t=INT_MIN, diff;
	clrscr();
	scanf("%d", &size);
	for(i=0;i<size;i++)
		scanf("%d", &a[i]);
	min=a[0];
	for(i=1;i<size;i++)
	{
		if(min>a[i])
			min=a[i];
	}
	//printf("%d\n", min);
	for(i=0;i<size;i++)
	{
		if(min<a[i])
		{
			diff=min-a[i];
			if(diff>=t){
				t=diff;
				max=a[i];
				}
		}
	}
		printf("%d", max);
getch();
}