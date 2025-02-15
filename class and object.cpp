#include<iostream>
#include<conio.h>
using namespace std;

class student
{
 public :
    int id;
    double gpa;
};

int main()
{
    student Alim,noushin;

    Alim.id = 101;
    Alim.gpa = 3.44;
    cout<<Alim.id<<"   "<<Alim.gpa<<endl;

    noushin.id = 102;
    noushin.gpa = 3.08;
    cout<<noushin.id<<"   "<<noushin.gpa<<endl;

    getch();
}
