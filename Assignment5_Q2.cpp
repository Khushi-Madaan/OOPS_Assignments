/*Create a class Area with overloaded calculate() functions to 
calculate the area of a square, rectangle, and circle.*/
#include <iostream>
using namespace std;
class Area
{
public:
    int calculate(int side)
    {
        return side * side;
    }
    int calculate(int length, int breadth)
    {
        return length * breadth;
    }
    double calculate(double radius)
    {
        return 3.14 * radius * radius;
    }
};
int main()
{
    Area a;
    cout << "Area of square: " << a.calculate(4) << endl;
    cout << "Area of rectangle: " << a.calculate(5, 3) << endl;
    cout << "Area of circle: " << a.calculate(3.0) << endl;
    return 0;
}

