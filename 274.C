#include<stdio.h>
#include<conio.h>
void main()
{
	int number, i, j, k, t=1, l=2;
	char a[10][10];
	clrscr();
	scanf("%d", &number);
	for(i=1;i<=number;i++)
	{
		t=0;
		for(k=1;k<=number-i;k++)
				printf(" ");
		for(j=1;j<=2*i-1;j++)
		{
			if(i>j)
			{
				printf("%c", 'A'+t);
				t++;
			}
			else if(j==2*i-1)
				printf("A");
			else
			{

				printf("%c", 'A'+t);
				t--;
			}


		}
		printf("\n");
	}
	//for(i=
getch();
}