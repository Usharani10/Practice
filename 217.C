#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	double mealcost, total_cost, tax_p, tip_p;
	int tip, tax;
	clrscr();
	scanf("%lf", &mealcost);
	scanf("%d %d", &tip, &tax);
	tip_p=mealcost*tip/100;
	tax_p=mealcost*tax/100;
	printf("%lf %lf ", tip_p, tax_p);
	total_cost=mealcost+tip_p+tax_p;
	printf("%lf", ceil(total_cost));
getch();
}
