#include<stdio.h>
#include<conio.h>
#include<limits.h>
void main()
{
	int a[10], i, max=0, min=0, size, t=INT_MAX, diff;
	clrscr();
	scanf("%d", &size);
	for(i=0;i<size;i++)

		scanf("%d", &a[i]);
	for(i=0;i<size;i++)
	{
		if(max<a[i])
			max=a[i];
	}
//        printf("%d\n", max);
	for(i=0;i<size;i++)
	{
		if(max>a[i])
		{
			diff=max-a[i];
			if(diff<t){
				t=diff;
				min=a[i];
				}
		}
	}
		printf("%d", min);
getch();
}