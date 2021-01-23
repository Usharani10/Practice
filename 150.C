#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10], i, j, size, min, t, ele, temp;
	clrscr();
	scanf("%d", &size);
	for(i=0;i<size;i++)
		scanf("%d", &a[i]);
       //	min=a[0];
	for(i=0;i<size;i++)
	{
		min=a[i]; temp=0;
		for(j=i+1;j<size;j++)
		{
			if(min>a[j]){
				min=a[j];
				ele=j;
				temp++;
			}
		}
		if(temp>0){
		t=a[i];
		a[i]=a[ele];
		a[ele]=t;
		}
	}
	for(i=0;i<size;i++)
		printf("%d ", a[i]);
getch();
}