/*Write a C++ program to divide two numbers. If the denominator is zero,
throw an exception and handle it using try and catch.*/
#include <iostream>
using namespace std;
int main()
{
    double num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    try
    {
        if (num2 == 0)
        {
            throw "Division by zero is not allowed!";
        }
        cout << "Result = " << num1 / num2;
    }
    catch (const char* message)
    {
        cout << "Error: " << message;
    }
    return 0;
}
