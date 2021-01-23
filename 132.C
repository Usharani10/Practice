#include<stdio.h>
#include<conio.h>
void main()
{
	int range, i, t,  sum=0;
	clrscr();
	scanf("%d", &range);
	for(i=1;i<=range;i++)
	{
		t=pow(i, i);
		sum=sum+t;
	      //printf("%d %d\n", pow, sum);
	}
	printf("%d", sum);
getch();
}
int pow(int b, int p)
{
	int c, i=1;
	for(c=1;c<=p;c++)
	      i*=b;
       //	printf("\n%d", i);
return i;
}

