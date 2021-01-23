#include<stdio.h>
#include<conio.h>
void main()
{
	int number, a[500], i, j, temp=0, index=0, k;
	clrscr();
	scanf("%d", &number);
	for(j=2;j<number;j++)
	{
		temp=0;
		for(i=2;i<=j/2;i++)
		{
			if(j%i==0)
			{
				temp=1;
				break;
			}
		}
		if(temp==0)
			a[index++]=j;
	}
	for(i=0;i<index-1;i++)
		printf("%d ", a[i]);

	for(i=0;i<index-1;i++)
	{
		for(j=i+1;j<index-1;j++)
		{
			if(a[i]+a[j]==number)
				printf("\n%d+%d->%d\n", a[i], a[j], number);
		}
	}
	for(i=0;i<index-1;i++)
	{
		for(j=i+1;j<index-1;j++)
		{
			for(k=j+1;k<index-1;k++)
			{
			if(a[i]+a[j]+a[k]==number)
				printf("\n%d+%d+%d->%d", a[i], a[j], a[k], number);
			//else
				//printf("No such pairs\n");
			}
		}
	}
getch();
}

