#include<stdio.h>
#include<conio.h>
main()
{
	int number, rem, i=0, a[10], j;
	clrscr();
	scanf("%d", &number);
	while(number)
	{
		rem=number%8;
		a[i]=rem;
		number=number/8;
		i++;
	}
	j=i;
	for(i=j-1;i>=0;i--)
	{
		printf("%d ", a[i]);
	}
	getch();
}



