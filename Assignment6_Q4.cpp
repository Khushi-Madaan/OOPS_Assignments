/*Create a class Number with an integer data member. Create two objects  and overload the following operators:
. + to add the values
. - to substtract the values
Display the result of both operations.*/
#include<iostream>
using namespace std;
class Number
{
		int value;
		public:
			Number()
			{
				value=0;
			}
			Number(int n)
			{
				value=n;
			}
			Number operator +(Number c)
			{
				return Number(value+c.value);
			}
			Number operator -(Number d)
			{
				return Number(value-d.value);
			}
			void display()
			{
				cout<<"Value = "<<value<<endl;
			}
};
int main()
{
	Number obj1(20);
	Number obj2(10);
	Number obj3;
	Number obj4;
	obj3=obj1+obj2;
	obj4=obj1-obj2;
	cout<<"\Addition = ";
	obj3.display();
	cout<<"\nSubtraction = ";
	obj4.display();
	return 0;
}
