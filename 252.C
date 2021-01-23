#include<stdio.h>
#include<conio.h>
void quicksort(int *, int, int);
int partition(int *, int, int);
//void swap(int *, int*);
void main()
{
	int a[10], size, i;
	clrscr();
	scanf("%d", &size);
	for(i=0;i<size;i++)
		scanf("%d", &a[i]);
	quicksort(a, 0, size-1);
	for(i=0;i<size;i++)
		printf("%d ",a[i]);
getch();
}
void quicksort(int a[], int start, int end)
{
	int pindex;
	if(start<end)
	{
	pindex=partition(a, start, end);
	quicksort(a, start, pindex-1);
	quicksort(a, pindex+1, end);
	}
 //return a;
}
int partition(int a[], int start, int end)
{
	int i, pindex, pivot, temp;
	pindex=start;
	pivot=end;
	for(i=start;i<end;i++)
	{
		if(a[i]<=a[pivot])
		{
			temp=a[i];
			a[i]=a[pindex];
			a[pindex]=temp;
			pindex++;
		}
	}
		temp=a[pindex];
			a[pindex]=a[end];
			a[end]=temp;

	printf("%d\n", pindex);
	return pindex;
}
