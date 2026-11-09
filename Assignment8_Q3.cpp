/*Write a program that accepts an integer and throws different exceptions
if the number is negative or greater than 100. Handle both exceptions 
separately.*/
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    try
    {
        if (num < 0)
        {
            throw "Number is negative!";
        }
        else if (num > 100)
        {
            throw num;
        }

        cout << "Valid number: " << num;
    }
    catch (const char* message)
    {
        cout << "Error: " << message;
    }
    catch (int n)
    {
        cout << "Error: Number is greater than 100!";
    }
    return 0;
}
