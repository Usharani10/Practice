#include<stdio.h>
#include<conio.h>
void main()
{
int dividend, divisor, remainder=0, quotient=0, i;
scanf("%d %d", &dividend, &divisor);
if(dividend>divisor)
{
	for(i=1;i<=dividend;i++)
	{
		if(i*divisor>dividend)
		break;
	}
	quotient=i-1;
	remainder=dividend-(quotient*divisor);
	printf("%d", remainder);
}
getch();
}



