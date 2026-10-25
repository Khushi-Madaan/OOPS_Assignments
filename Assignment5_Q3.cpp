/*Create a class Calculator with overloaded functions named sum():
. sum(int a, int b) — calculate the sum of two integers.
. sum(int a, int b, int c) — calculate the sum of three integers.
. sum(double a, double b) — calculate the sum of two decimal numbers.
Demonstrate all three overloaded functions using an object of the 
class.*/
#include <iostream>
using namespace std;
class Calculator
{
public:
    int sum(int a, int b)
    {
        return a + b;
    }
    int sum(int a, int b, int c)
    {
        return a + b + c;
    }
    double sum(double a, double b)
    {
        return a + b;
    }
};
int main()
{
    Calculator c;
    cout << "Sum of two integers: " << c.sum(10, 20) << endl;
    cout << "Sum of three integers: " << c.sum(10, 20, 30) << endl;
    cout << "Sum of decimal numbers: " << c.sum(5.5, 2.5) << endl;
    return 0;
}

