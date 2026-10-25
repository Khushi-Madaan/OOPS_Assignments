/*Differentiate between private and public access/scope. Perform 
the question no. 4 with class instead of structure with having the data members 
private and some member functions in private scope and some in 
public scope.*/
#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
    string name;
    int rollNo;
    string degree;
    string hostel;
    float currentCGPA;
public:
    void addDetails()
    {
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cout << "Enter Degree: ";
        cin.ignore();
        getline(cin, degree);
        cout << "Enter Hostel: ";
        cin.ignore();
        getline(cin, hostel);
        cout << "Enter Current CGPA: ";
        cin >> currentCGPA;
    }
    void updateDetails()
    {
        cout << "\nEnter New Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter New Roll No: ";
        cin >> rollNo;
        cout << "Enter New Degree: ";
        cin.ignore();
        getline(cin, degree);
    }
    void updateCGPA()
    {
        cout << "Enter New CGPA: ";
        cin >> currentCGPA;
    }
    void updateHostel()
    {
        cout << "Enter New Hostel: ";
        cin.ignore();
        getline(cin, hostel);
    }
    void displayDetails()
    {
        cout << "\n----- Student Details -----" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Degree: " << degree << endl;
        cout << "Hostel: " << hostel << endl;
        cout << "Current CGPA: " << currentCGPA << endl;
    }
};
int main()
{
    Student s;
	cout << "Enter Student Details\n";
    s.addDetails();
    cout << "\nOriginal Details:";
    s.displayDetails();
    cout<<"\nUpdate all basic details:";
    s.updateDetails();
    cout << "\nUpdating CGPA...\n";
    s.updateCGPA();
	cout << "\nUpdating Hostel...\n";
    s.updateHostel();
    cout << "\nUpdated Details:";
    s.displayDetails();
    return 0;
}

