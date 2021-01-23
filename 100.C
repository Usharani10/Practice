#include<stdio.h>
#include<conio.h>
void main()
{
	int a[20], i, range, mul_2=2, mul_3=3;
	clrscr();
	scanf("%d", &range);
	for(i=1;i<=range;i++)
	{
		if(i%2!=0)
		{
			if(i==1)
				a[i]=mul_2;
			else{
				mul_2=mul_2*2;
				a[i]=mul_2;
			}
		}

		else
		{
			if(i==2)
				a[i]=mul_3;
			else{
				mul_3=mul_3*3;
				a[i]=mul_3;
			}
		}
	}
	for(i=1;i<=range;i++)
		printf("%d ", a[i]);
getch();
}

