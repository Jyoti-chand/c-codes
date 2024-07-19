#include <iostream>
#include <conio.h>
using namespace std;
class student
{
private:
    int roll_no;

public:
    void enter()
    {
        cout << "enter roll no\n";
        cin >> roll_no;
    }
    void display()
    {
        cout << "roll_no=" << roll_no << endl;
    }
};
int main()
{

    student a; // object creation
    a.enter();
    a.display(); /*function call using dot operator*/
    getch();
    return 0;
}
