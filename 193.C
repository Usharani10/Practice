#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int a[10], ans[20], i, size, temp, tc, j, k=0, t;
	clrscr();
	scanf("%d", &tc);
	for(j=0;j<tc;j++)
	{
		scanf("%d", &size);
		for(i=0;i<size;i++)
			scanf("%d", &a[i]);
		for(i=0;i<size-1;i++)
		{
			if(a[i]>=1&&a[i]<=pow(10, 9))
			{
			if(i%2==0&&a[i]>a[i+1])
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}

		       else if(i%2!=0&&a[i]<a[i+1])
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
			}
		}
		for(t=0;t<size;t++)
			ans[k++]=a[t];

		ans[k++]=1;
	}
	for(i=0;i<k;i++)
	{
		if(ans[i]!=1)
			printf("%d ", ans[i]);
		else
			printf("\n");
	}
getch();
}
