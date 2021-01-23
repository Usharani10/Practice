#include<stdio.h>
#include<conio.h>
void main()
{
	int x1, x2, y1, y2, x3, y3, area;
	clrscr();
	printf("X coordintes\n");
	scanf("%d %d", &x1, &y1);
	printf("y coordintes\n");
	scanf("%d %d", &x2, &y2);
	printf("z coordintes\n");
	scanf("%d %d", &x3, &y3);
	area=0.5*((x1*(y2-y3))+(x2*(y3-y1))+(x3*(y1-y2)));
	if(area>0)
		printf("Can form a triangle\n");
	else
		printf("Cannot form a triangle\n");
getch();
}


