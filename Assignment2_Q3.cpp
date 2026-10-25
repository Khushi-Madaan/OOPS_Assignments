/*3. Write a program to create a class Employee with data memebers name,id and salary. Use a parametrized constructor to intialize these values and display the employee details.*/
#include<iostream>
#include<string>
using namespace std;
class Employee
{
	int id,salary;
	string name;
	public:
	Employee(string n,int i,int s)
	{
		name=n;
		id=i;
		salary=s;
	}
	void display()
	{
		cout<<"\nEmployee Name is: "<<name;
		cout<<"\nEmployee Id is: "<<id;
		cout<<"\nEmployee Salary is: "<<salary;
	} 
};
int main()
{
	Employee obj("Khushi Madaan",101,40000);
	cout<<"\nDetails of Employee 1\n";
	obj.display();
	Employee obj1("Kirti Verma",102,35000);
	cout<<"\n\nDetails of Employee 2\n";
	obj1.display();
	return 0;
}

