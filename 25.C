#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
int number, choice, count=0, i, temp;
scanf("%d %d", &number, &choice);
temp=number;
while(temp)
{
	temp=temp/10;
	count++;
}
switch(choice)
{
	case 1:
		insert_num(number, count);
	break;
	case 2:
	       //	delete_num(number, count);
	break;
}
getch();
return 0;
}
int insert_num(int n, int c)
{
	int choice, digit, sum=0,t, quot;
	printf("Enter choice and digit for insertion\n");
	scanf("%d %d", &choice, &digit);
	t=n;
	switch(choice)
	{
		case 1:
			printf("Insertion in First Position\n");
			sum=digit*pow(10,c);
			while(t)

			{       quot=t/pow(10,c-1);
				if(quot>0){
				sum=sum+(quot*pow(10, c-1));
				t=t%10;
				}
				else
				sum=sum+t;
			}
			printf("%d\n", sum);
		break;
		case 2:
			printf("Insertion in End\n");
			while(t)
			{
				quot=t/pow(10,c-1);
				if(quot>0){
				sum=sum+(quot*pow(10, c));
				t=t%10;
				}
				else
				{
				sum=sum+(t*pow(10,c-1));
				sum=sum+(digit*pow(10,c+1));
				}
				printf("%d\n", sum);
			}
		break;
	}
	return 0;
}




