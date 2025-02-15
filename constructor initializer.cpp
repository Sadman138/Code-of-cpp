#include<iostream>
#include<conio.h>
using namespace std;

class student
{
public:
    const int admissionFee;
    const int examFee;
    int id;

    student(int x,int y,int z)
    : admissionFee(x),examFee(y)
    {
        cout<<admissionFee<<endl;
        cout<<examFee<<endl;
        id = z;
        cout<<"id = "<<id;
    }
};

int main()

{
   student s1(15000,500,101);
   getch() ;
}
