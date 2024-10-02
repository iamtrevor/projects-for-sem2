// a program to find the volume of  sphere
#include <iostream>
using namespace std; 

int main() {
    float vol;
    float pi = 3.14;
    int rad;

    cout << "Enter the radius: ";
    cin >> rad;

    vol = (4.0 / 3.0) * pi * rad * rad * rad;
    cout << "The volume of the sphere is: " << vol << endl;

    return 0; 
}



