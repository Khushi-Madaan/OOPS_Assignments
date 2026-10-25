/*1.Write a program to create a class Student with data memebers name and rollNo. Use a default constructor to intialize these values and display the student details.*/
#include<iostream>
#include<string>
using namespace std;
class Student
{
	string name;
	int rollNo;
	public:
	Student(string a="Khushi",int b=2026010058)
	{
		name=a;
		rollNo=b;
	}
	void display()
	{
		cout<<"\nStudent Name is: "<<name;
		cout<<"\nStudent Roll No. is: "<<rollNo;
	} 
};
int main()
{
	Student obj;
	obj.display();
	Student obj1("Kirti");
	obj1.display();
	Student obj2("Aayra",2026010057);
	obj2.display();
}

