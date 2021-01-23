#include<stdio.h>
#include<conio.h>
void main()
{
int  range1, range2, i,j, temp=0;
clrscr();
scanf("%d %d", &range1, &range2);
for(i=range1;i<=range2;i++)
{
	temp=0;
	for(j=2;j<=range2/2;j++)
	{
		if(i%j==0)
		{
			temp=1;
			break;
		}
	}
	if(temp==0)
	printf("%d ", i);
}
getch();
}
