#include<stdio.h>
#include<conio.h>
struct emp
{
	char a[10];
	int rno, salary;
}e;
void main()
{
	scanf("%s", e.a);
	scanf("%d", &e.rno);
	scanf("%d", &e.salary);
	printf("%s ", e.a);
	printf("%d ", e.rno);
	printf("%d ", e.salary);
	getch();
}
