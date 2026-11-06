/*Create an abstract class BankAccount with a pure virtual function
calculateInterest(). Derive classes savingsAccount, and FixedDeposit 
that implement the function to calculate interest according to their
respective rules. Demonstrate the program using base-class pointers.*/
#include<iostream>
using namespace std;
class BankAccount
{
	protected:
		float amount;
	public:
	virtual void calculateInterest()=0;	
};
class SavingsAccount : public BankAccount 
{
	public:
		void calculateInterest()
		{
			cout<<"\nEnter Savings Account Amount: ";
			cin>>amount;
			float interest=amount*0.04;
			cout<<"Savings Account Interest= "<<interest<<endl;
		}
};
class FixedDeposit : public BankAccount 
{
	public:
		void calculateInterest()
		{
			cout<<"\nEnter Fixed Deposit Amount: ";
			cin>>amount;
			float interest=amount*0.07;
			cout<<"Fixed Deposit Interest= "<<interest<<endl;
		}
};
int main()
{
	BankAccount *ptr;
	SavingsAccount s;
	FixedDeposit f;
	ptr=&s;
	ptr->calculateInterest();
	ptr=&f;
	ptr->calculateInterest();
	return 0;
}
