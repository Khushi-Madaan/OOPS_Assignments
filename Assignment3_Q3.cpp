/*3. Create a class Employee with private data member salary. Create
two objects and use a friend function to compare their salaries and 
display the higher.*/

#include<iostream>
using namespace std;
class Employee
{
	int salary;
	public:
	Employee(int n)
	{
		salary=n;
	}
	friend void compare(Employee s1, Employee s2);
};
void compare(Employee s1, Employee s2)
{
	if(s1.salary>s2.salary)
	{
		cout<<s1.salary<<" is the Highest Salary of Employee\n";
	}
	else
	{
		cout<<s2.salary<<" is the Highest Salary of Employee\n";	
	}
}
int main()
{
	Employee obj(10000),obj1(30000);
	compare(obj,obj1);
	return 0;
}

