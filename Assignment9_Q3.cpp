/*Implement a class template Calculator that stores two values and 
provides functions to perform addition, subtraction, multiplication, 
and division.*/
#include <iostream>
using namespace std;
template <class T>
class Calculator
{
    T a, b;
public:
    Calculator(T x, T y)
    {
        a = x;
        b = y;
    }
    void add()
    {
        cout << "Addition: " << a + b << endl;
    }
    void subtract()
    {
        cout << "Subtraction: " << a - b << endl;
    }
    void multiply()
    {
        cout << "Multiplication: " << a * b << endl;
    }
    void divide()
    {
        if (b != 0)
            cout << "Division: " << (double)a / b << endl;
        else
            cout << "Division not possible" << endl;
    }
};
int main()
{
    Calculator<int> c(20, 10);
    c.add();
    c.subtract();
    c.multiply();
    c.divide();
    return 0;
}
