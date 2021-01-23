#include<stdio.h>
#include<conio.h>
void main()
{
	int hr, min, time12;
	clrscr();
	scanf("%d:%d",&hr,&min);
	if(hr==00)
		printf("12.%d AM", min);
	while(min)
	{
		if(min>=60){
			hr=hr+1;
			min=min-60;
		}
		else{//if(min==0){
			hr=hr+0.5;
			break;
		}
	}
	if(hr>0)
	{
		if(hr>12){
			time12=hr-12;
			printf("%d:%0d PM\n", time12, min);
		}
		else if(hr==12)
			printf("%d:%0d PM\n", hr, min);
		else
			printf("%d:%02d AM\n", hr, min);
	}
getch();
}