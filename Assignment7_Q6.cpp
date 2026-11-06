/*Create a base class Person with a virtual destructor and a derived
class Student with its own destructor. Create a dynamically allocated
Student object using a base-class pointer and delete it. Observe and
explain the order in which the destructors execute*/
#include<iostream>
using namespace std;
class Person
{
	public:
	Person()
	{
		cout<<"\nPerson constructor called";
	}
	virtual ~Person()
	{
		cout<<"\nPerson desstructor called";
	}
};
class Student : public Person 
{
	public:
	Student()
	{
		cout<<"\nStudent constructor called";
	}
	virtual ~Student()
	{
		cout<<"\nStudent desstructor called";
	}
};
int main()
{
	Person *ptr;
	ptr= new Student();
	delete ptr;
	return 0;
}
