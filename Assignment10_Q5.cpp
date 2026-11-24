/*Create a map to store student roll numbers and names. Allow the user
to insert student records, search by roll number, and display all 
records.*/
#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, string> students;
    int n, roll;
    string name;
    cout << "Enter number of students: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter roll number and name: ";
        cin >> roll >> name;
        students[roll] = name;
    }
    cout << "\nStudent Records:\n";
    for (auto x : students)
    {
        cout << x.first << " " << x.second << endl;
    }
    cout << "Enter roll number to search: ";
    cin >> roll;
    if (students.find(roll) != students.end())
        cout << "Student found: " << students[roll];
    else
        cout << "Student not found";
    return 0;
}
