#include<stdio.h>
#include<conio.h>
void main()
{
	int number, rem, temp, i, fact=1, sum=0;
	clrscr();
	scanf("%d", &number);
	temp=number;
	while(temp)
	{
		rem=temp%10;
		fact=1;
		for(i=1;i<=rem;i++)
			fact=fact*i;
		sum=sum+fact;
		temp=temp/10;
	}
	//printf("%d\n", sum);
	if(number==sum)
		printf("%d is strong number", number);
	else
		printf("%d is not a strong number", number);
getch();
}

