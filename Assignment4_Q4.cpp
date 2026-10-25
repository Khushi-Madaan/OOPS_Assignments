/*4. Create a C++ program to demonstrate Hierarchical Inheritance. 
Create a base class Vehicle containing: Brand, Model; Create two 
derived classes: Car : Number of Doors; Bike : Engine Capacity;
Create separate objects of Car and Bike and display their 
respective details. */
#include <iostream>
#include<string>
using namespace std;
class Vehicle
{
protected:
    string brand;
    string model;
public:
    void getVehicleDetails()
    {
        cout << "Enter Brand: ";
        cin >> brand;
        cout << "Enter Model: ";
        cin >> model;
    }
    void displayVehicleDetails()
    {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
    }
};
class Car : public Vehicle
{
private:
    int numberOfDoors;

public:
    void getCarDetails()
    {
        getVehicleDetails();
        cout << "Enter Number of Doors: ";
        cin >> numberOfDoors;
    }
    void displayCarDetails()
    {
        cout << "\n--- Car Details ---" << endl;
        displayVehicleDetails();
        cout << "Number of Doors: " << numberOfDoors << endl;
    }
};
class Bike : public Vehicle
{
private:
    int engineCapacity;
public:
    void getBikeDetails()
    {
        getVehicleDetails();
        cout << "Enter Engine Capacity (cc): ";
        cin >> engineCapacity;
    }
    void displayBikeDetails()
    {
        cout << "\n--- Bike Details ---" << endl;
        displayVehicleDetails();
        cout << "Engine Capacity: " << engineCapacity << " cc" << endl;
    }
};
int main()
{
    Car obj;
    Bike obj1;
    cout << "Enter Car Details" << endl;
    obj.getCarDetails();
    obj.displayCarDetails();
    cout << "\nEnter Bike Details" << endl;
    obj1.getBikeDetails();
    obj1.displayBikeDetails();
    return 0;
}

