/*2. Create a C++ program to demonstrate Multilevel Inheritance. Create three classes:  Person : stores Name; Employee : stores Employee ID;  Manager : stores Department; Derive Employee from Person and Manager from Employee. Display all the  details of the manager.*/
#include<iostream>
#include<string>
using namespace std;
class Person
{
	string Name;
	public:
	void getdata()
	{
		cout<<"\nEnter your Name: ";
		getline(cin,Name);	
	}	
	void show()
	{
		cout<<"\nName : "<<Name;
	}
};
class Employee:public Person
{ 
	int eId;
	public:
	void input()
	{
		cout<<"\nEnter your Employee ID : ";
		cin>>eId;
	}
	void display()
	{
		cout<<"\nEmployee ID : "<<eId;
	}
};
class Manager: public Employee
{
	int dpId;
	public:
		void accept()
		{
			getdata();
			input();
			cout<<"\nEnter Department Id : ";
			cin>>dpId;
		}
		void print()
		{
			cout<<"\n---Complete Manager Details---\n";
			show();
			display();
			cout<<"\nDepartment ID : "<<dpId;
		}
};
int main()
{
	Manager obj;
	obj.accept();
	obj.print();
	return 0;
}

