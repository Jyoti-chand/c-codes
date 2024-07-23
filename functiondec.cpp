#include<iostream>
using namespace std;
class student
{
    private:char name[20];
    int roll;
    float marks;
    public: void input();
    void display();
};
void student:: input()
{
cout<<"enter the info";
    cin>>name>>roll>>marks;

}
void student::display()
{
    cout<<name<<roll<<marks;
}
int main()
{
    student s1,s2,s3;
    s1.input();
    s1.display();
    s2.input();
    s2.display();
    s3.input();
    s3.display();
    return 0;
}

