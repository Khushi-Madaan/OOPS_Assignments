/*1. Create a C++ program to demonstrate Single Inheritance. Create a base class Person with the following data members: Name, Age; Create a derived class Student having: Roll Number, Course. Implement member functions to accept and display the complete details of a  student using inheritance.*/
#include<iostream>
#include<string>
using namespace std;
class Person
{
	string Name;
	int Age;
	public:
	void getdata()
	{
		cout<<"\nEnter your Name: ";
		getline(cin,Name);
		cout<<"\nEnter your Age: ";
		cin>>Age;	
	}	
	void show()
	{
		cout<<"\nName : "<<Name;
		cout<<"\nAge : "<<Age;
	}
};
class Student:public Person
{ 
	int Roll;
	string Course;
	public:
	void input()
	{
		getdata();
		cout<<"\nEnter your Roll No : ";
		cin>>Roll;
		cout<<"\nEnter your Course : ";
		cin>>Course;
	}
	void display()
	{
		cout<<"\n---Complete Student Details---\n";
		show();
		cout<<"\nRoll No. : "<<Roll;
		cout<<"\nCourse : "<<Course;
	}
};
int main()
{
	Student obj;
	obj.input();
	obj.display();
	return 0;
}

