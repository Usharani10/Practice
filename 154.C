#include<stdio.h>
#include<conio.h>
struct add
{
	int inch, feet;
}s1, s2;
void main()
{
	int sum;
	scanf("%d %d", &s1.inch, &s1.feet);
	scanf("%d %d", &s2.inch, &s2.feet);
	s1.feet*=12;
	s2.feet*=12;
	sum=s1.inch+s1.feet;
	printf("%d ",sum);
	sum=s2.inch+s2.feet;
	printf("%d ",sum);
getch();
}

