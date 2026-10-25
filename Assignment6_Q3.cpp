/*Create a class Number with an integer data member value. Create 
two objects  and overload the binary + operator to add the values 
stored in the two objects. Display the result.*/
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
				Number temp;
				temp.value=value+c.value;
				return temp;
			}
			void display()
			{
				cout<<"Value = "<<value<<endl;
			}
};
int main()
{
	Number obj1(10);
	Number obj2(20);
	Number obj3;
	obj3=obj1+obj2;
	cout<<"\nFirst Object\n";
	obj1.display();
	cout<<"\nSecond Object\n";
	obj2.display();
	cout<<"\nSum : ";
	obj3.display();
	return 0;
}
