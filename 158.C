#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	float a, b, c, i, j, discriminant, root1, root2, real, img;
	clrscr();
	scanf("%f %f %f", &a, &b, &c);
	discriminant=b*b-(4*a*c);
	//printf("%d", discriminant);
	if(discriminant>0)
	{
		root1=(-b+sqrt(discriminant))/(2*a);
		root2=(-b-sqrt(discriminant))/(2*a);
		printf("Real different:%.2f and %.2f\n ", root1, root2);

	}
	else if(discriminant==0)
	{
		root1=-b/2*a;
		root2=root1;
		printf("Same:%.2f and %.2f\n", root1, root2);
	}
	else
	{
		real=-b/2*a;
		img=sqrt(-discriminant)/2*a;
		printf("Complex:%.2f+i%.2f  and %.2f-i%.2f\n", real, img, real, img);
	}
getch();
}















	/*int a, b, c, i, j, temp1, temp2, p, s;
	clrscr();
	scanf("%d %d %d", &a, &b, &c);
	if(a>=0&&c>0)
	a=a*c;
	else
	{
		a=-a*c;
	}

	for(i=1;i<=a;i++)
	{
		for(j=2;j<=a;j++)
		{
			if(i*j==a)
			{
				if(b>0&&i+j==b) {
				printf("%d %d", i, j);
				break;   }
				if(b<0&&i-j==b) {
				printf("%d %d", i, -j);
				break;
				}

			}
		}
	}


getch();
}  */
