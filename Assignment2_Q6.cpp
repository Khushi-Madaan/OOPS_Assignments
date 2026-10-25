/*6. Create a Class Complex with real and imaginary data members. Implement:
a) a default constructor
b) a parametrized constructor
c) a display function*/

#include<iostream>
using namespace std;
class Complex
{
	int real,imaginary;
	public:
	Complex()
	{
		real=5;
		imaginary=3;
	}
	Complex(int r, int i)
	{
		real=r;
		imaginary=i;
	}
	void display()
	{
		cout<<"Complex no. is : "<<real<<" + "<<imaginary<<"i";
	}
};
int main()
{
	Complex obj;
	cout<<"\nDefault Constructor\n";
	obj.display();
	cout<<"\n\nParameterized Constructor\n";
	Complex obj1(7,9);
	obj1.display();
	return 0;
}

