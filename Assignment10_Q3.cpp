/*Store integers in a vector. Use the STL sort() algorithm to sort 
them and binary_search() to search for a given value.*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v = {40, 10, 30, 20, 50};
    sort(v.begin(), v.end());
    cout << "Sorted elements: ";
    for (int x : v)
        cout << x << " ";
    int n;
    cout << "\nEnter number to search: ";
    cin >> n;
    if (binary_search(v.begin(), v.end(), n))
        cout << "Element found";
    else
        cout << "Element not found";
    return 0;
}
