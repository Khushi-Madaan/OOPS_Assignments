/*Write a program to access an element of an array. Throw and handle 
an exception if the entered index is outside the valid range.*/
#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int index;
    cout << "Enter array index (0-4): ";
    cin >> index;
    try
    {
        if (index < 0 || index >= 5)
        {
            throw index;
        }
        cout <<"Element at index " << index<<" is: "<< arr[index];
    }
    catch (int i)
    {
        cout << "Error: Invalid array index!";
    }
    return 0;
}
