/*2. Create a class Number with private data members a and b. Use
a friend function to access and calculate and display their sum.*/

#include<iostream>
using namespace std;
class Number
{
	int a,b;
	public:
	Number(int n, int m)
	{
		a=n;
		b=m;
	}
	friend void sum(Number s);
};
void sum(Number s)
{
	int c=s.a+s.b;
	cout<<"\nSum of "<<s.a<<" and "<<s.b<<" is "<<c;
}
int main()
{
	Number obj(10,85);
	sum(obj);
	return 0;
}

