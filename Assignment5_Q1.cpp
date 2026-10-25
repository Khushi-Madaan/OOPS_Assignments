/*Create a class Print with overloaded display() functions to display an integer,
a double value, and a string.*/
#include <iostream>
#include <string>
using namespace std;
class Print
{
public:
    void display(int n)
    {
        cout << "Integer: " << n << endl;
    }
    void display(double n)
    {
        cout << "Double value: " << n << endl;
    }
    void display(string s)
    {
        cout << "String: " << s << endl;
    }
};
int main()
{
    Print p;
    p.display(10);
    p.display(12.5);
    p.display("Hello World");
    return 0;
}

