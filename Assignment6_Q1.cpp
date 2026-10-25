/*Create a class Counter with an integer data member count. Overload the unary ++ operator to increase the value of count by 1.
Create an object and display its value before and after applying ++.*/
#include<iostream>
using namespace std;
class Counter
{
		int count;
		public:
			Counter()
			{
				count=5;
			}
			void operator++()
			{
				count++;
			}
			void display()
			{
				cout<<"Count = "<<count<<endl;
			}
};
int main()
{
	Counter obj;
	cout<<"\nBefore increment : ";
	obj.display();
	++obj;
	cout<<"\nAfter increment : ";
	obj.display();
	return 0;
}
