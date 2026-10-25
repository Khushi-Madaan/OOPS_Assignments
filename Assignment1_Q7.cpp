/*Define a class named Complex with properties(real and imaginary)
and method as per following details:
void set() to initialize object values
void display() to display complex number
Complex sum(Complex) or void sum(Complex) to add 2 complex no.
Properties (real and imaginary) of the code should have private 
acess modifier and member functions should have public access 
modifier.*/
#include <iostream>
using namespace std;
class Complex
{
private:
    float real;
    float imaginary;
public:
    // Initialize object values
    void set()
    {
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> imaginary;
    }
    // Display complex number
    void display()
    {
        if (imaginary >= 0)
            cout << real << " + " << imaginary << "i" << endl;
        else
            cout << real << " - " << -imaginary << "i" << endl;
    }
    // Add two complex numbers
    void sum(Complex c)
    {
        real = real + c.real;
        imaginary = imaginary + c.imaginary;
    }
};
int main()
{
    Complex c1, c2;
    cout << "Enter first complex number:" << endl;
    c1.set();
    cout << "\nEnter second complex number:" << endl;
    c2.set();
    cout<<"\nfirst complex number:";
    c1.display();
    cout<<"\nsecond complex number: ";
    c2.display();
    // Add c2 to c1
    c1.sum(c2);
    cout << "\nSum of two complex numbers: ";
    c1.display();
    return 0;
}

