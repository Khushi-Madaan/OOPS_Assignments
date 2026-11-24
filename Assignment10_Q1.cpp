/*Write a C++ program using vector to store five integers, display 
all elements, and calculate their sum.*/
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    int n, sum = 0;
    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> n;
        v.push_back(n);
    }
    cout << "Vector elements: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
        sum = sum + v[i];
    }
    cout << "\nSum = " << sum;
    return 0;
}
