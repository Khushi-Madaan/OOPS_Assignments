/*Write a function template maximum() that accepts two values and 
returns the greater value. Test it with integers and floating-point 
numbers.*/
#include <iostream>
using namespace std;
template <class T>
T maximum(T a, T b)
{
    if (a > b)
        return a;
    else
        return b;
}
int main()
{
    int x = 10, y = 20;
    cout << "Greater integer: " << maximum(x, y) << endl;
    float a = 12.5, b = 8.5;
    cout << "Greater float: " << maximum(a, b);
    return 0;
}
