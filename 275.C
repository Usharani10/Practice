#include<stdio.h>
#include<conio.h>
void main()
{
	int range, i, j, t;
	clrscr();
	scanf("%d", &range);
	for(i=0;i<=range;i++)
	{
		t=1;
		if(i==0)
			printf("*");
		else{
		for(j=1;j<=2*i-1;j++)
		{
			if(j==1)printf("*");
			if(i>j)
			{
				printf("%d", t);
				t++;
			}
			else
			{
				printf("%d", t);
				t--;
			}
		}
		printf("*");
		}
		printf("\n");
	}
	for(i=range;i>=1;i--)
	{
		t=1;
		printf("*");
		for(j=2*i-1;j>2;j--)
		{
			if(i+1<j)
			{
				printf("%d", t);
				t++;
			}
			else
			{
				printf("%d", t);
				t--;
			}

		}
		if(i>1)
		printf("*");

		printf("\n");
	}
getch();

}