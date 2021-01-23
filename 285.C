#include<stdio.h>
#include<conio.h>
#include<string.h>
#define row 3
#define col 3
void check(int a[row][col], int str[row+row]);
void main()
{
       //int a[row][col]={1, 2, 3, 3, 1, 2, 2, 3, 1};
	int a[row][col]={1, 2, 3, 1, 3, 2, 1, 1, 1};
	int str[row+row];
	int i, j;
	clrscr();
	for(i=0, j=0;j<col;j++)
		str[j]=a[i][j];
	for(i=0;i<row;i++)
	      str[j++]=str[i];
	check(a, str);
getch();
}
void check(int a[row][col], int str[])
{
	int i, j, k=0, c=1,t,l,mat=0;
	for(i=0;i<row;i++)
	{
		j=0;k=0;
		while(str[k]!='\0')
		{
			if(a[i][j]==str[k])
			{
				c=1;
				t=j+1; l=k+1;
				while(t<col)
				{
					printf("%d %d\n", t, l);
					if(a[i][t]==str[l]) {
				      //	printf("d %d", str[l]);
						c++;  }

					else {
					//printf("g");
					break; }
					l++;
					t++;
				}
			}
			if(c==row)
			{
				mat++;
				printf("\ndsf\n");
				break;
			}
			k++;
		}
	}
	if(mat==row)
		printf("yes");
	else
		printf("no");
}

