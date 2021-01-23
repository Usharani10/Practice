#include<stdio.h>
#include<conio.h>
void main()
{
	int tc, initial, amt_dad,nth_day, i=0, ans[10], t;
	clrscr();
	scanf("%d", &tc);
	if(tc>=1&&tc<=100)
	{
		for(t=0;t<tc;t++)
		{
		scanf("%d %d %d", &initial, &amt_dad, &nth_day);
		if(initial<=100&&initial>=1&&amt_dad<=100&&amt_dad>=0&&nth_day<=100&nth_day>=1)
		{
			initial+=amt_dad*(nth_day-1);
			ans[i++]=initial;
		}
		else
			printf("Exceeds constraints\n");
		}
	}
	else
		printf("Testcase constraints exceeded");
       for(t=0;t<i;t++)
		printf("%d\n", ans[t]);
getch();
}