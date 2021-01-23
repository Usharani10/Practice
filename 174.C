#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10], i, j, size, temp, temp1, k, l, y=0, c[10];
	clrscr();
	scanf("%d", &size);
	for(i=0;i<size;i++)
		scanf("%d", &a[i]);
	for(i=0;i<size;i++)
	{
		temp=0;
		for(j=i+1;j<size;j++)
		{
			if(a[i]<a[j])
			{
				temp=1;
			      //  printf("%d %d ",j, a[j]);
				break;
			}
		}

		if(temp==0)
		{
			printf("%d ", a[i]);
			temp1=0;
			k=i;
			for(l=k-1;l>=0;l--)
			{
				if(a[k]<a[l])
				{
					temp1=1;
					break;
				}
			 }
			if(temp1==0)
			{
				c[y++]=a[i];
				//printf("%d ",a[i]);
			}
		}

	  }
	  printf("\n");
	  for(i=0;i<=y-1;i++)
	  printf("%d",c[i]);

getch();
}



