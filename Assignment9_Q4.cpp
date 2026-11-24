/*Create a class template ArrayOperations that stores an array of 
elements and provides functions to display the elements and find the 
largest element.*/
#include <iostream>
using namespace std;
template <class T>
class ArrayOperations
{
    T arr[5];
public:
    void getData()
    {
        cout << "Enter 5 elements: ";
        for (int i = 0; i < 5; i++)
        {
            cin >> arr[i];
        }
    }
    void display()
    {
        cout << "Array elements: ";
        for (int i = 0; i < 5; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    void largest()
    {
        T max = arr[0];
        for (int i = 1; i < 5; i++)
        {
            if (arr[i] > max)
                max = arr[i];
        }
        cout << "Largest element: " << max;
    }
};
int main()
{
    ArrayOperations<int> obj;
    obj.getData();
    obj.display();
    obj.largest();
    return 0;
}
