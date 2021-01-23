#include<stdio.h>
#include<conio.h>
struct add
{
	int real, img;
}s1, s2;
void main()
{
clrscr();
scanf("%d %d", &s1.real, &s1.img);
scanf("%d %d", &s2.real, &s2.img);
sum(s1, s2);
getch();
}
int sum(struct add s1, struct add s2)
{
int sum;
	sum=s1.real+s2.real;
	printf("%d ",sum);
	sum=s1.img+s2.img;
	printf("%d ",sum);
getch();
}