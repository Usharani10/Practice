#include<stdio.h>
#include<conio.h>
void main()
{
	int number, i, temp=0, j;
	clrscr();
	scanf("%d", &number);
	for(j=2;j<=number;j++)
	{      	temp=0;
		for(i=2;i<=j/2;i++)
		{
			if(j%i==0){
				temp=1;
				break;
			}
		}

	if(temp==1)
		printf("%d is composite number\n", j);
       //	else
	 //	printf("%d is not composite number\n", number);
	}
getch();
}
