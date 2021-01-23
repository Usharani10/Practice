#include<stdio.h>
#include<conio.h>
void main()
{
	int range1, range2, a[4]={0}, j, index=0, i, t, rem, temp;
	clrscr();
	scanf("%d %d", &range1, &range2);
	 for(i=range1;i<=range2;i++)
	{
		temp=i;
		index=0;
		while(temp)
		{
			rem=temp%2;
			a[index]=rem;
			temp=temp/2;
			index++;
		}
	     //	t=index;
		for(j=4-1;j>=0;j--)
			printf("%d", a[j]);

			printf("\n");
	}
	getch();
}
