#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10], i, j, size;
	clrscr();
	scanf("%d", &size);
	for(i=0;i<size;i++)
		scanf("%d", &a[i]);
	for(i=0;i<size;i++)
	{
		if(i%2==0){
		printf("Even:%d-%d\n", i,a[i]);
		}
		else{
		printf("Odd:%d-%d\n", i,a[i]);
		}
	}
getch();
}


