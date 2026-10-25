/*4. Write a program to create a class Box with data memebers length, width and height. Implement:
a) a default constructor
b) a parametrized constructor
c)a function to calculate and display volume*/

#include<iostream>
using namespace std;
class Box
{
	int length,width,height;
	public:
	Box()
	{
		length=3;
		width=10;
		height=5;
	}
	Box(int l,int w,int h)
	{
		length=l;
		width=w;
		height=h;
	}
	void display()
	{
		int volume=length*width*height;
		cout<<"\nVolume of Box is: "<<volume<<" unit cube";
	}
};
int main()
{
	Box obj;
	obj.display();
	Box obj1(8,6,7);
	obj1.display();
	return 0;
}

