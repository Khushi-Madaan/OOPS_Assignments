/*Create a class Number with an integer data member value. Overload the unary -- operator to decrease the value of object by 1.
Display its value before and after the operator.*/
#include<iostream>
using namespace std;
class Number
{
		int value;
		public:
			Number()
			{
				value=5;
			}
			void operator--()
			{
				value--;
			}
			void display()
			{
				cout<<"Value = "<<value<<endl;
			}
};
int main()
{
	Number obj;
	cout<<"\nBefore decrement : ";
	obj.display();
	--obj;
	cout<<"\nAfter decrement : ";
	obj.display();
	return 0;
}
