/*Create a code snippet that illustrates the following:
a. Calling of private member functions inside public member 
function.
b. Access private member functions inside public member 
function.*/

#include <iostream>
using namespace std;
class Student
{
private:
    // Private member function
    void privateFunction()
    {
        cout << "Private member function is called." << endl;
    }
public:
    // Public member function
    void publicFunction()
    {
        cout << "Public member function is called." << endl;
        // Calling private member function
        privateFunction();
    }
};
int main()
{
    Student s;
    // Calling public member function
    s.publicFunction();
    // Accessing private member function is NOT allowed
    // s.privateFunction();
    return 0;
}

