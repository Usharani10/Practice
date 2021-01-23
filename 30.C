#include<stdio.h>
#include<conio.h>
void main()
{
	int number, digit, rem, count=0, i, temp;
	int choice=1;
	clrscr();
	printf("Enter number\n");
	scanf("%d",&number);
	temp=number;
	do{
		printf("Enter digit\n");
		scanf("%d",&digit);
		while(number)
		{
			rem=number%10;
			if(rem==digit)
				count++;
			number=number/10;
		}
		printf("%d\n", count);
		number=temp;
		count=0;
		//printf("%d", number);
		printf("press 1 to continue\n");
		scanf("%d",&choice);
	}while(choice<=1);

getch();

}
