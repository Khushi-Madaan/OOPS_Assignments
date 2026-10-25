/*Implement the namespace in a program to illustrate the use of 
same name variables and finctions in different sections/libraries
of the code.*/
#include <iostream>
using namespace std;
// First namespace
namespace Library1
{
    int value = 10;
    void display()
    {
        cout << "Library1 value = " << value << endl;
    }
}
// Second namespace
namespace Library2
{
    int value = 20;
    void display()
    {
        cout << "Library2 value = " << value << endl;
    }
}
int main()
{
    // Access variables and functions using namespace resolution operator ::
    cout << "Value from Library1: " << Library1::value << endl;
    cout << "Value from Library2: " << Library2::value << endl;
    Library1::display();
    Library2::display();
    return 0;
}

