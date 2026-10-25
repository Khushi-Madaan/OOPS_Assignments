/*3. Create a C++ program to demonstrate Multiple Inheritance. Create two base classes:  Academic : stores Marks;  Sports : stores Sports Score; Create a derived class Result that inherits from both classes and calculates the  total score and displays the result.*/
#include<iostream>
using namespace std;
class Academic
{
	protected:
	int Marks;
	public:
	void getdata()
	{
		cout<<"\nEnter your Marks : ";
		cin>>Marks;	
	}	
};
class Sports
{ 
	protected:
	int spScore;
	public:
	void input()
	{
		cout<<"\nEnter your Sports Score : ";
		cin>>spScore;
	}
};
class Result: public Academic, public Sports
{
	int r;
	public:
		void display()
		{
			r=Marks+spScore;
			cout<<"\nTotal Score = "<<r;	
		}
};
int main()
{
	Result obj;
	obj.getdata();
	obj.input();
	obj.display();
	return 0;
}

