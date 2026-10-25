/*7. Create a Class Demo that displays a message when its constructor is called and another message when its destructor is called. Create multiple objects of the class and observe the order in which the constructors and destructors execute*/
#include<iostream>
using namespace std;
class Demo
{
	
	public:
	Demo()
	{
		cout<<"\nConstructor is called";
	}
	~Demo()
	{
		cout<<"\n\nDestructor is called";
	}
};
int main()
{
	cout<<"\nCreating Object 1";
	Demo obj;
	cout<<"\n\nCreating Object 2";
	Demo obj1;
	cout<<"\n\nCreating Object 3";
	Demo obj2;
	return 0;
}

