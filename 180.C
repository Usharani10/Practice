#include<stdio.h>
#include<conio.h>
void main()
{
	char a[10][5];
	int i, total_count, rno;
	clrscr();
	scanf("%d", &total_count);
	scanf("%d", &rno);
	for(i=1;i<=total_count;i++)
		scanf("%s", a[i]);
	for(i=1;i<=total_count;i++)
	{
		if(i==rno)
			printf("%s ", a[i]);
	}
getch();
}

