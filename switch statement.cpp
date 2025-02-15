#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int digit;

    cout<<"enter a digit: ";
    cin>>digit;

    switch(digit)
    {
    case 0:
        cout<<"zero";
        break;
    case 1:
        cout<<"one";
        break;
    case 2:
        cout<<"two";
        break;

    default:
        cout<<"not a digit";

    }
    getch();
}
