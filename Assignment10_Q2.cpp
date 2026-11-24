/*Write a program using list to insert elements at the beginning and 
end, remove an element, and display the list.*/
#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> l;
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);
    l.push_front(5);
    cout << "List elements: ";
    for (int x : l)
        cout << x << " ";
    l.pop_back();
    cout << "\nAfter removing last element: ";
    for (int x : l)
        cout << x << " ";
    return 0;
}
