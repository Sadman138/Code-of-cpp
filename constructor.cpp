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
    student(int x,double y)
    {
        id=x;
        gpa=y;
    }
};
int main()
{
     student noushin(101,3.44);
     noushin.dispaly();

     student sayma(102,3.9);
     noushin.dispaly();

     getch();
}
