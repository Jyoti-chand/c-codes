#include <iostream>
#include <cmath> // Include cmath for pow function

using namespace std;

int main()
{
    cout << "Enter radius: ";
    double radius;
    cin >> radius;

    const double pi = 3.14;
    double area = pi * pow(radius, 2); // Use pow function from cmath

    cout << "Area: " << area << endl; // Added "Area: " for clarity
    return 0;
}
