#include<iostream>

using namespace std;

class student
{
public:
    int id;
    double gpa;

    void display()
    {
        cout<<id<<" "<<gpa<<endl;
    }
};

int main()
{
    student Alim,Suparna;

    Alim.id=102;
    Alim.gpa=3.54;
    Alim.display();

    Suparna.id=102;
    Suparna.gpa=4.45;
    Suparna.display();

    return 0;
}
