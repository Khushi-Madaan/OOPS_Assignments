/*2. Write a program to create a class Rectangle with data memebers length and breadth Use a parametrized constructor to intialize these values and display the area of rectangle.*/
#include<iostream>
using namespace std;
class Rectangle
{
	int length,breadth;
	public:
	Rectangle(int l,int b)
	{
		length=l;
		breadth=b;
	}
	void display()
	{
		int area=length*breadth;
		cout<<"\nArea of "<<length<<" and "<<breadth<<" is "<<area<<" unit square";
	} 
};
int main()
{
	Rectangle obj(5,4);
	obj.display();
	Rectangle obj1(7,9);
	obj1.display();
	return 0;
}

