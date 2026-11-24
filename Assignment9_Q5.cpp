/*Create a class template Pair that stores two values, which may have
different data types. Implement functions to display both values. Test
it with an integer and a string.*/
#include <iostream>
#include <string>
using namespace std;
template <class T1, class T2>
class Pair
{
    T1 first;
    T2 second;
public:
    Pair(T1 a, T2 b)
    {
        first = a;
        second = b;
    }
    void display()
    {
        cout << "First value: " << first << endl;
        cout << "Second value: " << second << endl;
    }
};
int main()
{
    Pair<int, string> p(10, "Hello");
    p.display();
    return 0;
}
