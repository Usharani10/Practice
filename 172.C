#include<stdio.h>
#include<conio.h>
main()
{
	int size, a[10], i, j, k, l;
	clrscr();
	scanf("%d", &size);
	for(i=0;i<size;i++)
		scanf("%d", &a[i]);
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			k=a[i]+a[j];
			for(l=j+1;l<size;l++)
			{
				if(k==a[l])
					printf("%d %d %d\n", a[i], a[j], a[l]);
			}
		}
	}
getch();
}
