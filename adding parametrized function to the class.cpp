#include<iostream>
#include<conio.h>
using namespace std;

class student
{
public:
    int id;
    double gpa;

    void dispaly()
    {
        cout<<id<<" "<<gpa<<endl;
    }
    void setValue(int x,double y)
    {
        id=x;
        gpa=y;
    }
};
int main()
{
    student noushin,sayma;

    noushin.setValue(101,3.44);
    noushin.dispaly();

    sayma.setValue(102,4.55);
    sayma.dispaly();

    getch();
}
