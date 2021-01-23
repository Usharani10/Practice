#include<conio.h>
#include<stdio.h>
void main()
{
	int a[50];
	int f1=0,f2=1,f3, temp=0, i,j=2, k, range;
	clrscr();
	scanf("%d", &range);
	for(i=1;i<=range;i++)
	{
		if(i%2!=0)
		{
			if(i==1)
				a[i]=f2;
			else
			{
					f3=f1+f2;
					a[i]=f3;
					f1=f2;
					f2=f3;
			}
		}
		else
		{
		while(1)
		{
			temp=0;
			for(k=2;k<=j/2;k++)
			{
				if(j%k==0)
				{
					temp=1;
					break;
				}
			}
			j++;
			if(temp==0){
				a[i]=j-1;
				break;
				}

		}
		}
	}
	for(i=1;i<=range;i++)
		printf("%d ",a[i]);
getch();


}

