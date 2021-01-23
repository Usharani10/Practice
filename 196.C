#include<stdio.h>
#include<conio.h>
void main()
{
	char a[10][10];
	int word_count, i, count=1, tc, t, j, k=0;
	clrscr();
	scanf("%d", &tc);
	for(t=0;t<tc;t++)
	{
		scanf("%d", &word_count);
		for(i=0;i<word_count;i++)
			scanf("%s", a[i]);
		t=word_count;
		while(t>0)
		{
	      //	count=1;
		for(i=0;i<word_count;i++)
		{
			if(strcmp(a[i], a[i+1])==0&&a[i]!=1&&a[i+1]!=0)
			{
				count++;
				printf("%s\n", a[i]);
				*a[i]=1;
				*a[i+1]=0;//	break;
			}
			else
			k++;
		}
		t=word_count-count;
		if(count==1)
		break;
		if(k==word_count)
		break;
		}

	if(count>1)
		printf("%d", word_count-count);
	else
	       //	ans[k++]=word_count;//2
	       printf("%d", word_count);
	}
	getch();

}
       /*	}
	for(i=0;i<k;i++)
		printf("%d ",ans[i]);
}
	*/