#include <iostream>
using namespace std;
class student
{
private:
    char name[20];
     int roll;
    float marks;

public:
    void inpute()
    {
        cout << "enter name , roll, and marks";
        cin >> name >> roll >> marks;
    }
    void display()
    {
        cout << name << roll << marks;
    }
} s1;
int main()
{
    s1.inpute();
    s1.display();
    return 0;
}
