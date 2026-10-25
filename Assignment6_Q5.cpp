/*Create a class Complex with two data members real and imaginary. 
Overload the + operator to add two complex number objects and display
the resulting complex number. 
For example: First number = 3 + 4i Second number = 2 + 5i 
Result = 5 + 9i*/
#include <iostream>
using namespace std;
class Complex
{
    int real, imaginary;
public:
    void input(int r, int i)
    {
        real = r;
        imaginary = i;
    }
    Complex operator+(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imaginary = imaginary + c.imaginary;
        return temp;
    }
    void display()
    {
        cout << real << " + " << imaginary << "i" << endl;
    }
};
int main()
{
    Complex c1, c2, c3;
    c1.input(3, 4);
    c2.input(2, 5);
    c3 = c1 + c2;
    cout << "First number: ";
    c1.display();
    cout << "Second number: ";
    c2.display();
    cout << "Result: ";
    c3.display();
    return 0;
}

