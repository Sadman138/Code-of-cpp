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
    student()
    {
        cout<<"default constructor"<<endl;
    }
};
int main()
{
     student ob;

     student alim(101,3.44);
     alim.dispaly();

     student suparna(102,3.44);
     suparna.dispaly();

     getch();
}

