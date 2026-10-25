/*8. Write a program to demonstrate the execution order of constructors and destructors when objects are created inside main() and inside a separate function.*/
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
	void show()
	{
		cout<<"\n\nInside show() function:";
		Demo obj1;
		cout<<"\nEnd of show() function:"<<endl;
	}
};
int main()
{
	cout<<"\nInside main()";
	Demo obj;
	obj.show();
	cout<<"\n\nEnd of main()";
	return 0;
}

