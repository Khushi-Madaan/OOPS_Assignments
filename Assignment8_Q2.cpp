/*Write a program to input a person's age. Throw an exception if the 
age is negative and display an appropriate error message.*/
#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;
    try
    {
        if (age < 0)
        {
            throw age;
        }
        cout << "Your age is: " << age;
    }
    catch (int a)
    {
        cout << "Error: Age cannot be negative!";
    }
    return 0;
}
