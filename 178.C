#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10], b[10], size, i, temp=0, t=0, t1=0;
	clrscr();
	scanf("%d", &size);
	for(i=1;i<=size;i++)
		scanf("%d", &a[i]);
	printf("Odd places\n");
	for(i=1;i<=size;i++)
	{
		if(i%2==0&&a[i]%2!=0)
		{
			b[temp++]=a[i];
			a[i]='*';
			t=1;
		}
		if(i%2!=0&&a[i]%2==0&&a[i]!='*')
		{
		      printf("%d ", a[i]);
		      t1=1;
		}

	}
	if(t==0)
	printf("No even elements\n");
	if(t1==0)
	printf("No odd elements\n");

	printf("\nEven Places\n");
	for(i=1;i<=temp-1;i++)
		printf("%d ", b[i]);

getch();
}

