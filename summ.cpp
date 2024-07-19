#include <iostream>
using namespace std;
namespace student
{
    char name[20];
    float mark;
    int display()
    {
        cout << "hii";
    }
}
int add(int a, int b)
{
    return 0;
}
int main()
{
    int p, q, r;
    cin >> p >> q;
    r = add(p, q);
    cout << r;
    student::display();
    student::mark = 25;
    return 0;
}
