/*5. Write a program to demonstrate constructor overloading using a class Student. Create:
a) a default constructor
b) a constructor accepting name and roll number
c) a constructor accepting name, roll number and CGPA*/

#include<iostream>
#include<string>
using namespace std;
class Student
{
	int rollNo;
	string name;
	float cg;
	public:
	Student()
	{
		name="Khushi Madaan";
		rollNo=2026010058;
		cg=8.5;
	}
	Student(string n, int r)
	{
		name=n;
		rollNo=r;
		cg=8.5;	
	}
	Student(string n, int r, float c)
	{
		name=n;
		rollNo=r;
		cg=c;	
	}
	void display()
	{
		cout<<"\nName of Student is: "<<name;
		cout<<"\nRoll No. of Student is: "<<rollNo;
		cout<<"\nCGPA of Student is: "<<cg;
	}
};
int main()
{
	Student obj;
	cout<<"\nDetails of First Student\n";
	obj.display();
	cout<<"\n\nDetails of Second Student\n";
	Student obj1("Kirti Verma",2026010059);
	obj1.display();
	cout<<"\n\nDetails of Third Student\n";
	Student obj2("Geetanjli Dawra",2026010060,7);
	obj2.display();
	return 0;
}

