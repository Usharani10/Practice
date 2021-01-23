#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10], i, size, tc, t, j, c=0, temp, ans[10], k=0;
	clrscr();
	scanf("%d", &tc);
	if(tc>=1&&tc<=100)
	{
	for(t=0;t<tc;t++)
	{
		c=0;
		scanf("%d", &size);
		if(size>=1&&size<=1000)
		{
			for(i=0;i<size;i++)
				scanf("%d", &a[i]);
			while(1)
			{
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
				c=0;
				a[size-1]=a[size-1]-a[0];
				//for(i=0;i<size;i++)
				      //	printf("%d ",a[i]);
				for(i=1;i<size;i++)
				{
					if(a[0]==a[i])
					c++;
				}
				if(size-1==c)
				{
					ans[k++]=a[0];
					break;
				}
				if(t==tc)
					break;
			}
		}

	 }
	 }

	 for(i=0;i<k;i++)
		printf("%d ", ans[i]);
getch();
}