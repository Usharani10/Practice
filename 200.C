#include<stdio.h>
#include<conio.h>
void main()
{
	int steps[10], sol[10], i, j, temp, tc, size, t, k=0, ans[10];
	clrscr();
	scanf("%d", &tc);
	if(tc<=50)
	{
		for(t=0;t<tc;t++)
		{
			scanf("%d", &size);
			for(i=0;i<size;i++)
			{
				scanf("%d", &steps[i]);
				sol[i]=i+1;
			}
			for(i=0;i<size;i++)
			{
				for(j=i;j>0;j--)
				{
					if(steps[i])
					{
						temp=sol[j];
						sol[j]=sol[j-1];
						sol[j-1]=temp;
						steps[i]--;
					}
					if(steps[i]==0)
					break;
				}
			}
			for(i=0;i<size;i++)
				ans[k++]=sol[i];
			ans[k++]='*';
		}
	}
	for(i=0;i<k;i++)
	{
		if(ans[i]!='*')
		printf("%d", ans[i]);
		else
			printf("\n");
	}
getch();
}

