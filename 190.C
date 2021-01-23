#include<stdio.h>
#include<conio.h>
void main()
{
	char pie[30], cooler[30];
	int tc, no_of_pie_cool, i, j, count=0, ans[30], k=0, t;
	clrscr();
	scanf("%d", &tc);
	if(tc<=30)
	{
		for(t=0;t<tc;t++)
		{
			scanf("%d", &no_of_pie_cool);
			if(no_of_pie_cool<=30)
			{
				for(i=0;i<no_of_pie_cool;i++)
					scanf("%d", &pie[i]);
				for(i=0;i<no_of_pie_cool;i++)
					scanf("%d", &cooler[i]);
			}
			else
				printf("Constraints not matched. Exceeds 30\n");
			count=0;
			for(i=0;i<no_of_pie_cool;i++)
			{
				for(j=0;j<no_of_pie_cool;j++)
				{
					if(pie[i]<=cooler[j]&&cooler[j]!=0)
					{
						count++;
						cooler[j]=0;
						break;
					}
				}
			}

			for(i=0;i<no_of_pie_cool;i++)
			{
				for(j=0;j<no_of_pie_cool;j++)
				{
					if(pie[i]<cooler[j]&&cooler[j]!=0)
					{
						count++;
						cooler[j]=0;
						break;
					}
				}
			}
			if(count>1)
			ans[k++]=count;
		}
	}
		for(i=0;i<k;i++)
			printf("%d ", ans[i]);

	//else
	      //	printf("Testcase limit exceeds 30\n");
getch();
}

