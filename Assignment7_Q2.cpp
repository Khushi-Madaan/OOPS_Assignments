/*Create a base class Shape with a virtual function area(). Derive
classes Rectangle and Circle that override area() to calculate and
display their respective areas. Demonstrate runtime polymorphism
using a base-class pointer*/
#include<iostream>
using namespace std;
class Shape
{
	public:
	virtual void area()
	{
		cout<<"Area of shape"<<endl;	
	}	
};
class Rectangle : public Shape 
{
	float length,breadth;
	public:
		void area()
		{
			cout<<"Enter length and breadth: ";
			cin>>length>>breadth;
			cout<<"Area of Rectangle= "<<length*breadth<<endl;
		}
};
class Circle : public Shape 
{
	float radius;
	public:
		void area()
		{
			cout<<"Enter radius: ";
			cin>>radius;
			cout<<"Area of Circle= "<<3.14*radius*radius<<endl;
		}
};
int main()
{
	Shape *ptr;
	Rectangle r;
	Circle c;
	ptr=&r;
	ptr->area();
	ptr=&c;
	ptr->area();
	return 0;
}
