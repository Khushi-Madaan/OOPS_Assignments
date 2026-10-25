/*1. Create a class Student with private data members name and marks.
Write a friend function to access and display these private data
members.*/

#include<iostream>
#include<string>
using namespace std;
class Student
{
	string name;
	int marks;
	public:
	Student(string n, int m)
	{
		name=n;
		marks=m;
	}
	friend void display(Student s);
};
void display(Student s)
{
	cout<<"Name: "<<s.name<<endl;
	cout<<"Marks: "<<s.marks<<endl;
}
int main()
{
	Student obj("Khushi Madaan", 85);
	display(obj);
	return 0;
}

