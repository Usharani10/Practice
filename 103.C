#include<stdio.h>
#include<conio.h>
void main()
{
	int range, i, j, k, t, s;
	clrscr();
	scanf("%d", &range);
	for(i=1;i<=range;i++)
	{
		for(s=1;s<=range-i;s++)
			printf(" ");
		for(j=0;j<i;j++)
		{
			t=i+j;
			printf("%d ", t);
		}
		for(k=1;k<=(i-1);k++)
		{
			printf("%d ", t-k);
		}
		printf("\n");

	}
getch();
}