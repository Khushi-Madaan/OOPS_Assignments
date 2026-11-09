/*Create a class Student that accepts marks in five subjects. Throw 
exceptions if any mark is outside the range 0–100. Handle invalid 
input and display the average only when all marks are valid.*/
#include <iostream>
using namespace std;
class Student
{
    int marks[5];
public:
    void inputMarks()
    {
        int sum = 0;
        bool valid = true;
        try
        {
            for (int i = 0; i < 5; i++)
            {
                cout <<"Enter marks of subject "<<i + 1<< ": ";
                cin >> marks[i];
                if (marks[i] < 0)
                {
                    throw -1;
                }
                else if (marks[i] > 100)
                {
                    throw 1;
                }
                sum = sum + marks[i];
            }
        }
        catch (int n)
        {
            valid = false;
            if (n == -1)
            {
                cout << "Error: Marks cannot be negative!";
            }
            else
            {
                cout << "Error: Marks cannot be greater than 100!";
            }
        }
        if (valid)
        {
            float average = sum / 5.0;
            cout << "\nAverage Marks = " << average;
        }
    }
};
int main()
{
    Student s;
    s.inputMarks();
    return 0;
}
