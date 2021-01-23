#include<stdio.h>
#include<conio.h>
void merge(int*, int*, int*, int, int);
void split(int*, int);
void main()
{
	int a[10], i, size;
	clrscr();
	scanf("%d", &size);
	for(i=0;i<size;i++)
		scanf("%d", &a[i]);
	split(a, size);
	for(i=0;i<size;i++)
		printf("%d ", a[i]);
getch();
}
void split(int a[], int size)
{
	int low, high, mid, i, r=0, l=0, left[10], right[10];
	mid=size/2;
	if(size<2)
	return;
	for(i=0;i<mid;i++)
		left[l++]=a[i];
	for(i=mid;i<size;i++)
		right[r++]=a[i];
	split(left, l);
	split(right, r);
	merge(left, right, a, l, r);
}
void merge(int left[], int right[], int a[], int l, int r)
{
	int i=0, j=0, k=0;
	while(i<l&&j<r)
	{
		if(left[i]<right[j])
		{
			a[k++]=left[i];
			i++;
		}
		else
		{
			a[k++]=right[j];
			j++;
		}
	}
	while(i<l)
		a[k++]=left[i++];
	while(j<r)
		a[k++]=right[j++];
}







