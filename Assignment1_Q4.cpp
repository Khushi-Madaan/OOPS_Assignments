/*Create a structure in C++ containing the details of students as
 details below and a main function to execute the structure.
 Data Members(properties):
 Name,Roll No,Degree,Hostel,CurrentCGPA
 Member Function(behavior):
 addDetails():
 updateDetails();
 updateCGPA();
 updateHostel();
 displaydetails();*/
 #include<iostream>
 using namespace std;
 struct Student
 {
 	string Name;
   	int RollNo;
    	string Degree;
    	string Hostel;
    	float CurrentCGPA;
    void addDetails()
    {
        cout << "\nEnter Name: ";
        getline(cin, Name);

        cout << "\nEnter Roll No: ";
        cin >> RollNo;

        cout << "\nEnter Degree: ";
        cin.ignore();
        getline(cin,Degree);

        cout << "\nEnter Hostel: ";
        cin.ignore();
        getline(cin, Hostel);

        cout << "\nEnter Current CGPA: ";
        cin >> CurrentCGPA;
    }
    void updateDetails()
    {
        cout << "\nEnter new details:\n";
        addDetails();
    }
    void updateCGPA()
    {
        cout << "\nEnter new CGPA: ";
        cin >> CurrentCGPA;
    }
    void updateHostel()
    {
        cout <<"\nEnter new Hostel: ";
        cin.ignore();
        getline(cin,Hostel);
    }
    void displaydetails()
    {
        cout << "\n----- Student Details -----\n";
        cout << "Name       : " << Name << endl;
        cout << "Roll No    : " << RollNo << endl;
        cout << "Degree     : " << Degree << endl;
        cout << "Hostel     : " << Hostel << endl;
        cout << "Current CGPA: " << CurrentCGPA << endl;
    }
 };
 int main()
 {
 	Student s;
 	s.addDetails();
 	s.displaydetails();
 	cout << "\nUpdating CGPA...\n";
    s.updateCGPA();
    cout << "\nUpdating Hostel...\n";
    s.updateHostel();
 	cout << "\nUpdated Student Details:\n";
    s.displaydetails();
    cout << "\nAll Updated/Changed Student Details:\n";
    s.updateDetails();
    s.displaydetails();
    return 0;
 }

