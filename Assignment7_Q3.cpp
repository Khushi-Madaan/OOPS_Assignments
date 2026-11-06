/*Create a base class Employee with data members name and basicSalary
and a virtual function CalculateSalary(). Derive classes PeramnentEmployee
and Contractemployee that calculate salary differently. Call the overridden
functons using a base-class pointer*/
#include<iostream>
#include<string>
using namespace std;
class Employee
{
	protected:
		string name;
		float basicSalary;
	public:
	virtual void calculateSalary()
	{
		cout<<"Calculating Employee Salary"<<endl;	
	}	
};
class PermanentEmployee : public Employee 
{
	public:
		void calculateSalary()
		{
			cout<<"Enter employee name: ";
			cin>>name;
			cout<<"\nEnter basic salary: ";
			cin>>basicSalary;
			float salary=basicSalary+(basicSalary*0.20);
			cout<<"\nPermanent Employee: "<<name<<endl;
			cout<<"Total salary= "<<salary<<endl;
		}
};
class ContractEmployee : public Employee 
{
	public:
		void calculateSalary()
		{
			cout<<"\nEnter employee name: ";
			cin>>name;
			cout<<"\nEnter basic salary: ";
			cin>>basicSalary;
			float salary=basicSalary+(basicSalary*0.10);
			cout<<"\nContract Employee: "<<name<<endl;
			cout<<"Total salary= "<<salary<<endl;
		}
};
int main()
{
	Employee *ptr;
	PermanentEmployee p;
	ContractEmployee c;
	ptr=&p;
	ptr->calculateSalary();
	ptr=&c;
	ptr->calculateSalary();
	return 0;
}
