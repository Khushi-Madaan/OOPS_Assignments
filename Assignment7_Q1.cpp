/*Create a base class Animal with a virtual function sound(). Derive
classes Dog and Cat that override sound() to display their respective
sounds. Call the functions using base-class pointers.*/
#include<iostream>
using namespace std;
class Animal
{
	public:
	virtual void sound()
	{
		cout<<"Animal makes a sound"<<endl;	
	}	
};
class Dog : public Animal 
{
	public:
		void sound()
		{
			cout<<"Dog barks: Woof Woof!"<<endl;
		}
};
class Cat : public Animal 
{
	public:
		void sound()
		{
			cout<<"Cat meows: Meow Meow!"<<endl;
		}
};
int main()
{
	Animal *ptr;
	Dog d;
	Cat c;
	ptr=&d;
	ptr->sound();
	ptr=&c;
	ptr->sound();
	return 0;
}
