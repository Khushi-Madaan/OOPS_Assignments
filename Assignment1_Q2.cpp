/*W.A.P. that will ask for temperature in Celsius and display in Fahrenheit.[F=9C/5+32]*/
#include <iostream>
using namespace std;
int main()
{
float temp;
cout<<"Enter temperature in Celsius: ";
cin>>temp;
float f=(9*temp/5)+32;
cout<<"Temperature in Fahrenheit: "<<f<<"F";
return 0;
}

