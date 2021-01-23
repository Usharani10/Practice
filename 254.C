#include<stdio.h>
#include<conio.h>
void heapsort(int *, int);
void heapify(int *, int, int);
void main()
{
	int a[10], size, i;
	clrscr();
	scanf("%d",&size);
	for(i=0;i<size;i++)
		scanf("%d", &a[i]);
	heapsort(a, size);
	for(i=0;i<size;i++)
		printf("%d ", a[i]);
getch();
}
void heapsort(int a[], int size)
{
	int i, temp;
	for(i=size/2-1;i>=0;i--)
		heapify(a, size, i);
	for(i=size-1;i>=0;i--)
	{
		temp=a[0];
		a[0]=a[i];
		a[i]=temp;
		heapify(a, i, 0);
	}
}
void heapify(int a[], int size, int i)
{
	int large, left, right, temp;
	large=i;
	left=2*i+1;
	right=2*i+2;
	if(left<size&&a[left]>a[large])
		large=left;
	if(right<size&&a[right]>a[large])
		large=right;
	if(large!=i)
	{
		temp=a[large];
		a[large]=a[i];
		a[i]=temp;
		heapify(a, size, large);
	}
}

