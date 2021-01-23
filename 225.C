#include<stdio.h>
#include<conio.h>
void main()
{
	int n, k, tc, t, a[10], i, ans=0, j, and;
	clrscr();
	scanf("%d", &tc);
	for(t=0;t<tc;t++)
	{
		ans=0;
		scanf("%d %d", &n, &k);
		for(i=0;i<n;i++)
			a[i]=i+1;
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{

				if((a[i]&a[j])>=ans&&(a[i]&a[j])<k)
					ans=(a[i]&a[j]);
				       //	printf("%d %d %d\n", a[i], a[j], ans);}
			}
		}
		printf("%d ", ans);
	}
getch();
}
