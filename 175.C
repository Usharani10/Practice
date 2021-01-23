#include<stdio.h>
#include<conio.h>
void main()
{
	int size, a[10], b[10], c=0, i, j, temp, diff, count=0;
	clrscr();
	scanf("%d", &size);
	for(i=0;i<size;i++)
		scanf("%d", &a[i]);
	for(i=0;i<size;i++)
	{
		if(a[i]%2!=0)
		{
			a[i]=0;
			count++;
		}
	}
	if(count!=size)
	{
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<size;i++)
	printf("%d ", a[i]);
	printf("\n");
	diff=a[0]-a[1];
	b[c++]=a[0];
       //	printf("%d", a[0]);
	for(i=1;i<size;i++)
	{
		if(a[i]-a[i+1]==diff&&a[i+1]!=0)
			b[c++]=a[i+1];

		      //	printf("%d %d\n", a[i], a[i+1]);
		else
		break;
	}
	printf("Min:%d\n",b[c-1]);
	}
	else
		printf("No even number series");
getch();
}