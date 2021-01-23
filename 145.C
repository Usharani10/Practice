#include<stdio.h>
#include<conio.h>
void main()
{
	char a[10];
	int range, i;
	gets(a);
	scanf("%d", &range);
	for(i=0;a[i]!='\0';i++)
	{
		if(i==range)
			break;
		else
			printf("%c", a[i]);
	}
getch();
}