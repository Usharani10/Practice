#include<stdio.h>
#include<conio.h>
void main()
{
	int a_date, a_month, a_year, r_date, r_month, r_year, fee=0;
	clrscr();
	scanf("%d %d %d", &a_date, &a_month, &a_year);
	scanf("%d %d %d", &r_date, &r_month, &r_year);
	if(a_month==r_month && a_year==r_year && a_date > r_date) {
		fee=fee+(a_date-r_date)*15; ;
		printf("%d ", fee);
	}
	else if(a_month>r_month && a_date== r_date && a_year==r_year)
	{
		fee=fee+(a_month-r_month)*500;
		printf("%d ", fee);
	}
	else if(a_year>r_year && a_date==r_date && a_month==r_month)
	{
		fee=fee+(a_year-r_year)*10000;
		printf("%d ", fee);
	}
	else
		printf("No fee\n");
getch();
}