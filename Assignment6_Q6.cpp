/*Create a class Student with a data member CGPA. Create two student 
objects and overload the following relational operators: '==' to 
check whether both students have the same CGPA. 
'>' to check which student has the higher CGPA. Display an appropriate 
message based on the comparison.*/
#include <iostream>
using namespace std;
class Student
{
    float CGPA;
public:
    void input(float c)
    {
        CGPA = c;
    }
    bool operator==(Student s)
    {
        return CGPA == s.CGPA;
    }
    bool operator>(Student s)
    {
        return CGPA > s.CGPA;
    }
};
int main()
{
    Student s1, s2;
    s1.input(8.5);
    s2.input(9.0);
    if (s1 == s2)
    {
        cout << "Both students have the same CGPA." << endl;
    }
    else
    {
        cout << "Both students have different CGPA." << endl;
    }
    if (s1 > s2)
    {
        cout << "First student has a higher CGPA." << endl;
    }
    else if (s2 > s1)
    {
        cout << "Second student has a higher CGPA." << endl;
    }
    else
    {
        cout << "Both students have the same CGPA." << endl;
    }
    return 0;
}
 
