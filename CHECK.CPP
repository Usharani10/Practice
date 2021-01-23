#include<iostream.h>
#include<conio.h>
#include<string.h>
class student
{
	public:
		int rno;
		char name[10];
	void insert(int r, char a[])
	{
		rno=r;
		strcpy(name, a);
	}
	void display()
	{
		cout<<rno<<" "<<name;
	}
};
void main()
{
	student s1, s2;
	s1.insert(1, "hi");
	s1.display();
getch();
}

