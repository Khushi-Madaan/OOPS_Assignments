/*Create a class with overloaded result() functions to display marks 
in one subject, calculate the average of two subjects, and calculate 
the average of three subjects.*/
#include <iostream>
using namespace std;
class Result
{
public:
    void result(int marks)
    {
        cout << "Marks in one subject: " << marks << endl;
    }
    void result(int m1, int m2)
    {
        cout << "Average of two subjects: "
             << (m1 + m2) / 2.0 << endl;
    }
    void result(int m1, int m2, int m3)
    {
        cout << "Average of three subjects: "
             << (m1 + m2 + m3) / 3.0 << endl;
    }
};
int main()
{
    Result r;
    r.result(85);
    r.result(50, 90);
    r.result(60, 80, 95);
    return 0;
}

