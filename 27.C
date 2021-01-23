#include<stdio.h>
#include<conio.h>
int main(){
	long int number;
	int  rem, i=0, sum=0;
	clrscr();
	scanf("%ld", &number);
	while(number)
	{
		rem=number%10;
		sum=sum+(rem*pow(2, i++));
		number/=10;
	}
	printf("%d ",sum);
getch();
return 0;
}
int pow(int b, int p)
{
	int i=0, ans=1;
	for(i=0;i<p;i++)
		ans=ans*b;
	return ans;
}

