/*Create a class Maximum with overloaded functions named findMax():
. findMax(int a, int b) — find the greater of two integers.
. findMax(int a, int b, int c) — find the greatest of three integers.
. findMax(double a, double b) — find the greater of two decimal 
numbers.*/
#include <iostream>
using namespace std;
class Maximum
{
public:
    int findMax(int a, int b)
    {
        if (a > b)
        {
	
            return a;
        }
        else
        {
            return b;
        }
    }
    int findMax(int a, int b, int c)
    {
        int greatest = a;
        if (b > greatest)
        {
            greatest = b;
		}
        if (c > greatest)
        {
		    greatest = c;
        	return greatest;
        }
    }
    double findMax(double a, double b)
    {
        if (a > b)
        {
            return a;
        }
        else
        {
            return b;
        }
    }
};
int main()
{
    Maximum m;
    cout << "Greater integer btw. two integers: " << m.findMax(10, 20) << endl;
    cout << "Greatest integer btw. three integers: " << m.findMax(15, 25, 18) << endl;
    cout << "Greater decimal btw. two decimals: " << m.findMax(7.5, 9.2) << endl;
    return 0;
}

