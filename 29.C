#include<stdio.h>
#include<conio.h>
void main()
{
	int number, sum=0, i, temp;
	clrscr();
	scanf("%d", &number);
	temp=number;
       //	while(number)
       //	{
		for(i=1;i<=number&&number>0;i++)
		{
			if(number%i==0)
			{
			sum=sum+i;
			printf("%d ",i);
			number=number/i;
			}
	  //	}


	}
	printf("Sum:%d\n", sum);
	if(sum==temp)
		printf("%d is perfect number\n", temp);
	else
		printf("%d is not a perfect number\n", temp);
getch();
}

