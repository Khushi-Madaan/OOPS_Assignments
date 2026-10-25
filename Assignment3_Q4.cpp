/*4. Create a class Student with static data member to keep track
of the number of objects created. Create three objects and 
display the total number of objects.*/

#include<iostream>
using namespace std;
class Student
{
	static int count;
	public:
	Student()
	{
		count+=1;
	}
	static void display()
	{
		cout<<"\nTotal number of objects are: "<<count;
	}
};
int Student::count=0;
int main()
{
	Student obj1,obj2,obj3;
	Student::display();
	return 0;
}

