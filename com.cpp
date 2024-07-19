#include <iostream>
using namespace std;
int main()
{
    cout << "fahrenheit:";
    int fahrenheit;
    cin >> fahrenheit;
    /*convert fahrenheit to celsius*/
    double celsius = (fahrenheit - 32) / 1.8;
    cout << celsius;
    return 0;
}
