#include<stdio.h>
#include<conio.h>
int main()
{
	int number, rem, i=0, a[6]={'A', 'B', 'C', 'D', 'E', 'F'}, b[10], j=0;
	clrscr();
	scanf("%d", &number);
	while(number)
	{
		rem=number%16;
		if(rem>9)
		{
			for(i=0;i<6;i++)
			{
				if(rem==i+9) {
				       //	printf("%c ",a[i-1]);
				       b[j++]=a[i-1]; }
			}
		}
		else
			b[j++]=rem;
		number=number/16;
	       //	printf("%d ", j);
	}
	for(i=j-1;i>=0;i--)
	{
		if(b[i]>='A'&&b[i]<='F')
			printf("%c ",b[i]);
		else
			printf("%d ", b[i]);
	}

getch();
return 0;
}
