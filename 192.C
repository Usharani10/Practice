#include<stdio.h>
#include<conio.h>
void main()
{
	int candi_count[10], ans[10];
	int tc, no_of_ele, no_of_candi, i, j, sum=0, k=0;
	clrscr();
	scanf("%d", &tc);
	if(tc>=1&&tc<=1000)
	{
		for(i=0;i<tc;i++)
		{
			sum=0;
			scanf("%d %d", &no_of_ele, &no_of_candi);
			if((no_of_ele>=1&&no_of_ele<=100)&&(no_of_candi>=1&&no_of_ele<=109))
			{
				for(j=0;j<no_of_ele;j++)
				{
					scanf("%d", &candi_count[j]);
					sum+=candi_count[j];
				}
				ans[k++]=sum;
			}
			else
				printf("Exceeds constraints\n");
		}
	}
	else
		printf("Testcase limit exceeds\n");
	for(i=0;i<k;i++)
	{
		if(ans[i]<=no_of_candi)
			printf("Yes\n");
		else
			printf("No\n");
	}
getch();
}
