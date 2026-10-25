/*5. Create a class Bank Account with: 
Private data members:
1. accountNo
2. balance
Static data member:
1. totalAccounts
Implement:
1. A constructor to initialize the account details.
2. A friend function to display private account details.
3. A static data member to display the total number of accounts
created.*/
#include<iostream>
using namespace std;
class BankAccount
{
	static int totalAccounts;
	int accountNo;
	float balance;
	public:
	BankAccount(int a, float b)
	{
		accountNo=a;
		balance=b;
		totalAccounts+=1;
	}
	static void display()
	{
		cout<<"\nTotal number of Accounts created are: "<<totalAccounts;
	}
	friend void show(BankAccount s);
};
int BankAccount::totalAccounts=0;
void show(BankAccount s)
{
	cout<<"\n\nAccounts Details are: "<<endl;
	cout<<"Account Number: "<<s.accountNo;
	cout<<"\nBalance: "<<s.balance;
}
int main()
{
  BankAccount obj1(2026010058,500000),obj2(2026010059,300000),obj3(2026010060,100000);
  BankAccount::display();
  show(obj1);
  show(obj2);
  show(obj3);
  return 0;
}

