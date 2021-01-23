#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10], range1, range2, size, i, c=0;
	clrscr();
	scanf("%d %d %d", &range1, &range2, &size);
	for(i=0;i<size;i++)
		scanf("%d",&a[i]);
	for(i=0;i<size;i++)
	{
		if(a[i]<=range2&&a[i]>=range1)
			c++;
	}
	if(c==size)
		printf("Yes");
getch();
}

