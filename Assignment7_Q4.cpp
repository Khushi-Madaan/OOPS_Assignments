/*Create a base class Vehicle with a virtual function displayinfo().
Derive classes Car, Bike and Bus and override the function in each
class to display the vehicle details.Demonstrate runtime polymorphism
using base-class pointer.*/
#include<iostream>
using namespace std;
class Vehicle
{
	public:
	virtual void displayInfo()
	{
		cout<<"Vehicle Informtion"<<endl;	
	}	
};
class Car : public Vehicle 
{
	public:
		void displayInfo()
		{
			cout<<"\nThis is a Car."<<endl;
			cout<<"It has four wheels."<<endl;
		}
};
class Bike : public Vehicle 
{
	public:
		void displayInfo()
		{
			cout<<"\nThis is a Bike."<<endl;
			cout<<"It has two wheels."<<endl;
		}
};
class Bus : public Vehicle 
{
	public:
		void displayInfo()
		{
			cout<<"\nThis is a Bus."<<endl;
			cout<<"It is used for public transport."<<endl;
		}
};
int main()
{
	Vehicle *ptr;
	Car c;
	Bike b;
	Bus bs;
	ptr=&c;
	ptr->displayInfo();
	ptr=&b;
	ptr->displayInfo();
	ptr=&bs;
	ptr->displayInfo();
	return 0;
}
