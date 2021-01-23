#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10], b[10], i, tc, testcase, size, count=0, index=0;
	clrscr();
	scanf("%d", &tc);
	while(tc)
	{
		scanf("%d",&testcase);
		scanf("%d", &size);
		for(i=0;i<size;i++)
			scanf("%d",&a[i]);
		count=0;
		for(i=0;i<size;i++)
		{
			if(a[i]%2==0)
				count++;
		}
		b[index++]=count;
		tc--;
	}
	for(i=0;i<index;i++)
		printf("%d ", b[i]);
getch();
}




