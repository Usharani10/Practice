#include<stdio.h>
#include<conio.h>
main()
{
	int Amount;
	int r1000, r500, r100, r50, r1, rAmount;
	clrscr();
	scanf("%d", &Amount);
	r1000=Amount/1000;
	rAmount=Amount%1000;
	r500=rAmount/500;
	rAmount=rAmount%500;
	r100=rAmount/100;
	rAmount=Amount%100;
	r50=rAmount/50;
	rAmount=rAmount%50;
	r1=rAmount/1;
	rAmount=rAmount%1;
	printf("1000 Rupees:%d\n", r1000);
	printf("500 Rupees:%d\n", r500);
	printf("100 Rupees:%d\n", r100);
	printf("50 Rupees:%d\n", r50);
	printf("1 Rupee:%d", r1);
	getch();
	}

