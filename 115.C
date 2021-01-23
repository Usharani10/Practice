#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int a[20], count=0, i,j, size,rem, sum=0, number, t;
	clrscr();
	scanf("%d", &size);
	for(i=0;i<size;i++)
		scanf("%d", &a[i]);
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(a[i]==a[j]) {
				a[j]=0;
				a[i]=0;}
		}
		if(a[i]!=0)
		printf("%d ", a[i]);
	}
	for(i=0;i<size;i++)
	{       sum=0;count=0;
		if(a[i]!=0)
		{
			number=a[i];
			while(number)
			{
				number/=10;
				count++;
			}
			number=a[i];
			while(number)
			{
				rem=number%10;
				t=pow(rem, count);
				sum=sum+t;
				number/=10;
			}
			if(a[i]==sum)
				printf("%d ", a[i]);
		}
       }
getch();
}





